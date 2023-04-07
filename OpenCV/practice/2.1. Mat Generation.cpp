#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {

    int data1[] = { 500, 100, -500, 1000, 0, 500, 100, -500, 2000, 0 };
    float data2[] = { 0.1f, 5.1f, -0.2f, 0.1f, 4.1f, -0.3f, 0.1f, 3.1f, -0.4f };

    Mat m1(2, 5, CV_32SC1, data1);
    Mat m2(3, 3, CV_32FC1, data2);

    cout << m1 << endl;
    cout << m2 << endl;

    return 0;
}