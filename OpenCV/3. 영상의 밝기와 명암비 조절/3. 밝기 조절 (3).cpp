#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src = imread("OpenCV/images/lenna.bmp", IMREAD_GRAYSCALE);
    if (src.empty()) {
        cerr << "Image load failed!" << endl;
        return -1;
    }

    Mat dst(src.rows, src.cols, src.type());

    // 포화 연산 반영
    for (int j = 0; j < src.rows; j++) {
        for (int i = 0 ; i < src.cols; i++) {
            dst.at<uchar>(j, i) = saturate_cast<uchar>(src.at<uchar>(j, i) + 100);
        }
    }

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    return 0;
}