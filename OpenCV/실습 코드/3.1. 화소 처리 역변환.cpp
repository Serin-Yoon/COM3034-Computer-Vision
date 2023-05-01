#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img1 = imread("images/lenna.bmp", IMREAD_GRAYSCALE);
    if (img1.empty()) {
        cerr << "Image load failed!" << endl;
        return -1;
    }

    Mat img2 = img1 + 100;
    Mat img3 = img1 - 100;

    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);

    waitKey(0);
    return 0;
}