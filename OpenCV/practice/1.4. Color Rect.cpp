#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat A(100, 200, CV_8UC3, Scalar(255, 255, 255));
    Rect R(90, 40, 20, 20);
    Rect R1, R2, R3;
    Point P(50, 0);

    R1 = R - P;
    R2 = R;
    R3 = R + P;

    rectangle(A, R1, Scalar(0, 0, 255)); // R
    rectangle(A, R2, Scalar(255, 0, 0)); // B
    rectangle(A, R3, Scalar(0, 255, 0)); // G

    imshow("result", A);
    waitKey(0);

    return 0;
}