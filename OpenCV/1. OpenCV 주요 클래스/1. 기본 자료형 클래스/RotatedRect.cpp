#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    // RotatedRect: used in segmentation, ...
    RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);
    Point2f pts[4];
    rr1.points(pts);
    Rect br = rr1.boundingRect();

    return 0;
}