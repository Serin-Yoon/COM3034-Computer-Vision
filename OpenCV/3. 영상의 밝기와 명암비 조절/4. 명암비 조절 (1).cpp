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

    float s = 2.f;
    Mat dst = s * src;

    imshow("src", src);
    imshow("dst", dst);

    waitKey(0);
    return 0;
}