#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img(200, 640, CV_8UC3, Scalar(255, 255, 255));
    const String text = "Hello, OpenCV";
    int fontFace = FONT_HERSHEY_TRIPLEX;
    double fontScale = 2.0;
    int thickness = 1;

    Size sizeText = getTextSize(text, fontFace, fontScale, thickness, 0);
    Size sizeImg = img.size();

    Point org((sizeImg.width - sizeText.width) / 2, (sizeImg.height + sizeText.height) / 2);
    putText(img, text, org, fontFace, fontScale, Scalar(255, 0, 0), thickness);
    rectangle(img, org, org + Point(sizeText.width, -sizeText.height), Scalar(255, 0, 0), 1);

    imshow("result", img);
    waitKey(0);

    return 0;
}