#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat img1 = imread("images/dog.bmp");
    Mat img2 = img1; // shallow copy
    Mat img3;
    img3 = img1; // shallow copy
    
    return 0;
}