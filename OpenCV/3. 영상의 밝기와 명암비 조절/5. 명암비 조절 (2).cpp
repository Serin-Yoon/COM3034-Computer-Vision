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

    float alpha = 1.f; // 알파 값 수동 설정
    Mat dst = src + (src - 128) * alpha;

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    return 0;
}