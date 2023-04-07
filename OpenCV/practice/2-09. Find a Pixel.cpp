#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img;
    img = imread("images/read_gray.jpg", IMREAD_GRAYSCALE);
    Point2i pt;

    for (int j = 0; j < img.rows; j++) {
        for (int i = 0; i < img.cols; i++) {
            if (img.at<uchar>(j, i) == 175 
            && img.at<uchar>(j-1, i) == 255
            && img.at<uchar>(j, i-1) == 244
            && img.at<uchar>(j, i+1) == 254
            && img.at<uchar>(j+1, i) == 223) {
                pt.x = j;
                pt.y = i;
            }
        }
    }

    cout << pt << endl;
    return 0;
}