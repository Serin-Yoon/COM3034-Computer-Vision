#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

/*
CV_<bit-depth>{U|S|F}C(<numberof-channels)

CV_8U: unsigned char
CV_8S: signed char
CV_16U: unsigned short
CV_16S: signed short
CV_32S: int
CV_32F: float
CV_64F: double
CV-16F: float16_t
*/

int main() {
    Mat img1;
    Mat img2(480, 640, CV_8UC1);                    // unsigned char, 1 channel
    Mat img3(480, 640, CV_8UC3);                    // unsigned char, 3 channels
    Mat img4(Size(640, 480), CV_8UC3);              // Size(width, height)
    Mat img5(480, 640, CV_8UC1, Scalar(128));       // initial value 128
    Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255)); // initial value red


    float data[] = { 1, 2, 3, 4, 5, 6 };
    Mat mat(2, 3, CV_32FC1, data); // 32 bit float 1 channel
    cout << "mat:" << endl << mat << endl << endl;

    Mat mat1 = Mat::zeros(3, 3, CV_32SC1);
    Mat mat2 = Mat::ones(3, 3, CV_32FC1);
    Mat mat3 = Mat::eye(3, 3, CV_32FC1);
    cout << "mat1:" << endl << mat1 << endl << endl;
    cout << "mat2:" << endl << mat2 << endl << endl;
    cout << "mat3:" << endl << mat3 << endl << endl;

    Mat_<float> mat4_(2, 3);
    mat4_ << 1, 2, 3, 4, 5, 6;
    Mat mat4 = mat4_;
    // (= Mat mat4 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);)
    cout << "mat4:" << endl << mat4 << endl << endl;

    Mat mat5 = Mat_<float>({2, 3}, {1, 2, 3, 4, 5, 6});
    cout << "mat5:" << endl << mat5 << endl << endl;

    mat4.create(256, 256, CV_8UC3);
    mat5.create(4, 4, CV_32FC1);
    mat4 = Scalar(255, 0, 0);
    mat5.setTo(1.f);

    return 0;
}