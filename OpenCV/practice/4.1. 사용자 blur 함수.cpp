#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

void blurUser1(Mat src, Mat& dst, int ksize) {
    blur(src, dst, Size(ksize, ksize));
}

void blurUser2(Mat src, Mat& dst1, Mat& dst2, int ksize) {
    blur(src, dst1, Size(ksize, ksize), Point(-1, -1), BORDER_REPLICATE);
    blur(src, dst2, Size(ksize, ksize), Point(-1, -1), BORDER_REFLECT);
}

int main() {

    Mat img = imread("OpenCV/images/lenna.bmp", IMREAD_GRAYSCALE);
    Mat blur1, blur2, blur3;

    blurUser1(img, blur1, 5);
    blurUser2(img, blur2, blur3, 5);
    imshow("img", img);
    imshow("blur1", blur1);
    imshow("blur2", blur2);
    imshow("blur3", blur3);

    waitKey();
    return 0;
}