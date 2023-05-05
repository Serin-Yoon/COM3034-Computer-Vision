#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat A(100, 200, CV_8UC1, Scalar(0)); // 8bit Unsigned 1 Channel
    Rect R(90, 40, 20, 20);
    Rect R1, R2;
    Point P1(-60, -10);
    Point P2(40, -10);
    Size S(20, 20);

    R1 = R + S + P1;
    R2 = R + S + P2;

    rectangle(A, R1, Scalar(255));
    rectangle(A, R2, Scalar(255));

    imshow("result", A);
    waitKey(0);

    return 0;
}