#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;
using namespace cv::ml;

Point ptPrev(-1, -1);

Ptr<KNearest> train_knn();
void on_mouse(int event, int x, int y, int flags, void* userdata);

int main() {
    Ptr<KNearest> knn = train_knn(); // 훈련 함수 호출
    if (knn.empty()) {
        cerr << "Training failed!" << endl;
        return -1;
    }

    Mat img = Mat::zeros(400, 400, CV_8U); // 400x400 Canvas
    imshow("img", img);
    setMouseCallback("img", on_mouse, (void*)&img); // 마우스 콜백 함수 등록 (on_mouse 불릴 때마다 img 인자로)

    while (true) {
        int c = waitKey(0);
        // ESC 누르면 종료
        if (c == 27) break;
        // Space 누르면 글씨 인식, 결과 출력
        else if (c == ' ') { 
            /* 테스트 데이터 가공 */
            Mat img_resize, img_float, img_flatten, res;
            resize(img, img_resize, Size(20, 20), 0, 0, INTER_AREA); // 400x400 -> 20x20 (훈련 데이터와 같도록)
            img_resize.convertTo(img_float, CV_32F);                 // 테스트 데이터 float 형태여야 함
            img_flatten = img_float.reshape(1, 1);                   // 1x20x20 -> 1x1x400

            /* 예측 결과 확인 */
            knn->findNearest(img_flatten, 3, res);
            cout << cvRound(res.at<float>(0, 0)) << endl;

            /* 초기화 */
            img.setTo(0); // 행렬 0으로 초기화
            imshow("img", img);
        }
    }
    return 0;
}

Ptr <KNearest> train_knn() {
    /* 데이터셋 */
    Mat digits = imread("images/digits.png", IMREAD_GRAYSCALE);
    if (digits.empty()) {
        cerr << "Image load failed!" << endl;
        return 0;
    }

    /* 훈련 데이터, 레이블 데이터 가공 */
    Mat train_images, train_labels; // 훈련 데이터 행렬, 레이블 데이터 행렬
    for (int j = 0; j < 50; j++) {
        for (int i = 0; i < 100; i++) {
            Mat roi, roi_float, roi_flatten;
            roi = digits(Rect(i * 20, j * 20, 20, 20)); // ROI 20x20 pixel
            roi.convertTo(roi_float, CV_32F);           // 훈련 데이터 float 형태여야 함
            roi_flatten = roi_float.reshape(1, 1);      // 1x20x20 -> 1x1x400

            train_images.push_back(roi_flatten);        // train images 세로로 추가
            train_labels.push_back(j / 5);              // 0 ~ 4: 0, ..., 45 ~ 49: 9
        }
    }

    /* 훈련 데이터, 레이블 데이터로 훈련 진행 */
    Ptr<KNearest> knn = KNearest::create(); // kNearest 객체 생성하고 shared 포인터에 넣음
    knn->train(train_images, ROW_SAMPLE, train_labels); // 훈련 진행

    return knn;
}

void on_mouse(int event, int x, int y, int flags, void* userdata) {
    Mat img = *(Mat*)userdata;

    if (event == EVENT_LBUTTONDOWN) {
        ptPrev = Point(x, y);
    }
    else if (event == EVENT_LBUTTONUP) {
        ptPrev = Point(-1, -1);
    }
    else if (event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)) {
        line(img, ptPrev, Point(x, y), Scalar::all(255), 40, LINE_AA, 0);
        ptPrev = Point(x, y);
        imshow("img", img);
    }
}