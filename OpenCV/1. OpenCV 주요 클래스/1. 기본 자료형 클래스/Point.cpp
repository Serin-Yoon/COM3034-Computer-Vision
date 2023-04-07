#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Point_<float> pt1(0.1f, 0.1f);
    Point_<float> pt2(0.2f, 0.2f);
    Point pt3 = pt1 + pt1;
    Point pt4 = pt1 + pt2;

    cout << "pt1: " << pt1 << endl;
    cout << "pt2: " << pt2 << endl;
    cout << "pt3: " << pt3 << endl;
    cout << "pt4: " << pt4 << endl;

    return 0;
}