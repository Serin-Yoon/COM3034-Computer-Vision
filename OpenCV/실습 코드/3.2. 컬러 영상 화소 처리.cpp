#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src = imread("images/lenna.bmp", IMREAD_COLOR);
    if (src.empty()) {
        cerr << "Image load failed!" << endl;
        return -1;
    }

    // 한 픽셀씩 해주는 방법도 있음
    Mat dst = src / Scalar(2, 1, 1);

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    return 0;
}