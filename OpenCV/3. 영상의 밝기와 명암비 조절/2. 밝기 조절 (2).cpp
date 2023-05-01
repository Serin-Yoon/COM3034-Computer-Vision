#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src = imread("images/lenna.bmp", IMREAD_GRAYSCALE);
    if (src.empty()) {
        cerr << "Image load failed!" << endl;
        return -1;
    }

    // Mat dst로 하면 메모리 초기화 안돼서 에러
    Mat dst(src.rows, src.cols, src.type());

    // 한 픽셀씩 값 변경 (포화 값 고려하지 않음)
    for (int j = 0; j < src.rows; j++) {
        for (int i = 0; i < src.cols; i++) {
            dst.at<uchar>(j, i) = src.at<uchar>(j, i) + 100;
        }
    }

    // 포화 고려하여 overflow 방지
    /*
    for (int j = 0; j < src.rows; j++) {
        for (int i = 0; i < src.cols; i++) {
            int v = src.at<uchar>(j, i) + 100;
            dst.at<uchar>(j, i) = v > 255 ? 255 : v < 0 ? 0 : v;
        }
    }
    */

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    return 0;
}