#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat mat1 = Mat::zeros(3, 4, CV_8UC1);

    cout << mat1 << endl;

    for (int j = 0; j < mat1.rows; j++) {
        for (int i = 0; i < mat1.cols; i++) {
            mat1.at<uchar>(j, i)++;
        }
    }

    cout << mat1 << endl;

    return 0;
}