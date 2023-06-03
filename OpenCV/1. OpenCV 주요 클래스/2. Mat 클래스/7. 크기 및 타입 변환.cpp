#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img1 = imread("OpenCV/images/lenna.bmp", IMREAD_GRAYSCALE);
    Mat img1f;
    img1.convertTo(img1f, CV_32FC1);

    uchar data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    Mat mat1(3, 4, CV_8UC1, data1);
    Mat mat2 = mat1.reshape(0, 1); // channel 수 변경 X

    cout << "mat1:" << endl << mat1 << endl << endl;
    cout << "mat2:" << endl << mat2 << endl << endl;
    
    Mat mat3 = Mat::ones(1, 4, CV_8UC1) * 255;
    mat1.push_back(mat3);
    cout << "mat1:" << endl << mat1 << endl << endl;

    mat1.resize(6, 100);
    cout << "mat1:" << endl << mat1 << endl;

    return 0;
}