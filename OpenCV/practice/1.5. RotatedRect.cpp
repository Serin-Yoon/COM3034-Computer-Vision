#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat image(300, 500, CV_8UC1, Scalar(255));
    Size2f size(200, 20);

    RotatedRect rr1(Point2f(240, 140), size, 0);
    Point2f points[4];
    rr1.points(points);
    Rect rt1 = rr1.boundingRect();

    RotatedRect rr2(Point2f(240, 140), size, 90);
    Point2f points2[4];
    rr2.points(points2);
    Rect rt2 = rr2.boundingRect();

    rectangle(image, rt1, Scalar(0));
    rectangle(image, rt2, Scalar(0));

    RotatedRect rr3(Point2f(240, 140), size, 45);
    Point2f points3[4];
    rr3.points(points3);
    for(int i =0; i<4; i++){
        line(image, points3[i], points3[(i+1)%4], Scalar(0));
    }

    RotatedRect rr4(Point2f(240, 140), size, 135);
    Point2f points4[4];
    rr4.points(points4);
    for(int i =0; i<4; i++){
        line(image, points4[i], points4[(i+1)%4], Scalar(0));
    }

    imshow("result", image);
    waitKey(0);

    return 0;
}