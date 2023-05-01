#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;
using namespace cv::ml;

Mat img;
Mat train, label;
Ptr<KNearest> knn;
int k_value = 1; // k 값 설정

void addPoint(const Point& pt, int cls);
void trainAndDisplay();

int main() {
    img = Mat::zeros(Size(500, 500), CV_8UC3); // 0으로 초기화
    knn = KNearest::create(); // KNearest 객체 생성

    namedWindow("knn");

    const int NUM = 30;
    Mat rn(NUM, 2, CV_32SC1); // 30x2 랜덤 integer mat 생성
 
    /*
    훈련 데이터 (150, 150), (350, 150), (250, 400)을 중심으로 하는 가우시안 분포의 R, G, B점 30개씩 생성
    (0, 0) ~ (499, 499) 좌표 사이 모든 점에 대해 kNN 분류 수행하여 R, G, B 색상으로 나타냄
    */

    randn(rn, 0, 50); // 평균 0, 표준편차 50 분포 rn에 출력
    for (int i = 0; i < NUM; i++) {
        addPoint(Point(rn.at<int>(i, 0) + 150, rn.at<int>(i, 1) + 150), 0); // (150, 150) 중심, 클래스 0
    }

    randn(rn, 0, 50); // 평균 0, 표준편차 50 분포 rn에 출력
    for (int i = 0; i < NUM; i++) {
        addPoint(Point(rn.at<int>(i, 0) + 350, rn.at<int>(i, 1) + 150), 1); // (350, 150) 중심, 클래스 1
    }

    randn(rn, 0, 70); // 평균 0, 표준편차 70 분포 rn에 출력
    for (int i = 0; i < NUM; i++) {
        addPoint(Point(rn.at<int>(i, 0) + 250, rn.at<int>(i, 1) + 400), 2); // (250, 400) 중심, 클래스 2
    }

    trainAndDisplay();

    waitKey(0);
    return 0;
}

// 데이터, 레이블 받고 훈련 데이터(좌표), 레이블 데이터(0/1/2) 생성
void addPoint(const Point& pt, int cls) {
    Mat new_sample = (Mat_<float>(1, 2) << pt.x, pt.y);
    train.push_back(new_sample);

    Mat new_label = (Mat_<int>(1, 1) << cls);
    label.push_back(new_label);
}

void trainAndDisplay() {
    /* Train */
    knn->train(train, ROW_SAMPLE, label); // samples, layout, responses

    // img의 매 pixel마다 nearest neighbor 찾고 label에 따라 R, G, B 색칠
    for (int i = 0; i < img.rows; ++i) {
        for (int j = 0; j < img.cols; ++j) {
            Mat sample = (Mat_<float>(1, 2) << j, i); // 각 pixel

            Mat res;
            knn->findNearest(sample, k_value, res); // samples, k, results
            int response = cvRound(res.at<float>(0, 0)); // float -> int

            // 배경 색칠
            if (response == 0) {
                img.at<Vec3b>(i, j) = Vec3b(128, 128, 255); // R
            }
            else if (response == 1) {
                img.at<Vec3b>(i, j) = Vec3b(128, 255, 128); // G
            }
            else if (response == 2) {
                img.at<Vec3b>(i, j) = Vec3b(255, 128, 128); // B
            }
        }
    }

    /* Display */
    for (int i = 0; i < train.rows; i++) {
        int x = cvRound(train.at<float>(i, 0)); // float -> int
        int y = cvRound(train.at<float>(i, 1)); // float -> int
        int l = label.at<int>(i, 0);

        // 훈련 데이터 점 색칠
        if (l == 0) {
            circle(img, Point(x, y), 5, Scalar(0, 0, 128), -1, LINE_AA);
        }
        else if (l == 1) {
            circle(img, Point(x, y), 5, Scalar(0, 128, 0), -1, LINE_AA);
        }
        else if (l == 2) {
            circle(img, Point(x, y), 5, Scalar(128, 0, 0), -1, LINE_AA);
        }
    }

    imshow("knn", img);
}