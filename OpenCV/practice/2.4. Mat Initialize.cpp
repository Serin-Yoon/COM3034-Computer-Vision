#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat m1(2, 2, CV_8UC3);
    Mat m2(2, 2, CV_8UC3);
    Mat m3(2, 2, CV_8UC3);
    Mat m4(2, 2, CV_8UC3);
    Mat m5(2, 2, CV_8UC3);
    Mat m6(2, 2, CV_8UC3);

    m1 = 255;
    m2 = Scalar(255, 0, 0);
    m3 = Scalar(255, 255, 255);
    m4.setTo(255);
    m5.setTo(Scalar(255, 0, 0));
    m6.setTo(Scalar(255, 255, 255));

    cout << "m1: " << endl << m1 << endl;
    cout << "m2: " << endl << m2 << endl;
    cout << "m3: " << endl << m3 << endl;
    cout << "m4: " << endl << m4 << endl;
    cout << "m5: " << endl << m5 << endl;
    cout << "m6: " << endl << m6 << endl;

    return 0;
}