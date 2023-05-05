#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {

    Mat m1(200, 300, CV_8UC1);
    m1(Rect(0, 50, 300, 100)) = 255;

    Mat m2(200, 300, CV_8UC3);
    m2(Rect(0, 50, 300, 100)) = Scalar(0, 255, 0);

    imshow("m1", m1);
    imshow("m2", m2);
    waitKey(0);

    return 0;
}