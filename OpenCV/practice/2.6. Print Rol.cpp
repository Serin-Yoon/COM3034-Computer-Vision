#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat m1(10, 15, CV_32S);
    m1 = 100;

    m1(Rect(3, 1, 5, 4)) = 200;
    m1(Rect(8, 5, 6, 4)) = 300;
    m1(Rect(5, 3, 5, 4)) = 555;

    cout << m1 << endl;
    return 0;
}