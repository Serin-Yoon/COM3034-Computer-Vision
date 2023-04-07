#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img(400, 400, CV_8UC3, Scalar(255, 255, 255));

    circle(img, Point(100, 100), 100, Scalar(0, 255, 0), -1, LINE_AA);
    circle(img, Point(300, 100), 100, Scalar(0, 255, 0), -1, LINE_AA);
    circle(img, Point(100, 300), 100, Scalar(0, 255, 0), -1, LINE_AA);
    circle(img, Point(300, 300), 100, Scalar(0, 255, 0), -1, LINE_AA);

    line(img, Point(200, 100), Point(100, 200), Scalar(0, 0, 255), 2, LINE_AA);
    line(img, Point(200, 100), Point(300, 200), Scalar(0, 0, 255), 2, LINE_AA);
    line(img, Point(100, 200), Point(100, 300), Scalar(0, 0, 255), 2, LINE_AA);
    line(img, Point(300, 200), Point(300, 300), Scalar(0, 0, 255), 2, LINE_AA);
    line(img, Point(100, 300), Point(300, 300), Scalar(0, 0, 255), 2, LINE_AA);

    imshow("result", img);
    waitKey(0);
    return 0;
}
