#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img1 = imread("images/cat.bmp");
    Mat img2 = img1(Rect(220, 120, 340, 240)); // Shallow copy
    Mat img3 = ~img2; // 반전
    imshow("img1", img1);
    imshow("img2", img2);
    imshow("img3", img3);
    waitKey(0);
    return 0;
}