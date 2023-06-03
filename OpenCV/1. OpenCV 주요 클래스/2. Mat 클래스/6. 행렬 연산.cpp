#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    float data[] = { 1, 1, 2, 3 };
    Mat mat1(2, 2, CV_32FC1, data);
    cout << "mat1:" << endl << mat1 << endl << endl;

    Mat mat2 = mat1.inv(); // inverse matrix
    cout << "mat2:" << endl << mat2 << endl << endl;

    cout << "mat1.t():" << endl << mat1.t() << endl << endl; // transpose matrix
    cout << "mat1 + 3:" << endl << mat1 + 3 << endl << endl;
    cout << "mat1 + mat2:" << endl << mat1 + mat2 << endl << endl;
    cout << "mat1 * mat2:" << endl << mat1 * mat2 << endl << endl; // matrix multiplication

    float data1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    Mat mat3(3, 3, CV_32FC1, data1);
    Mat mat4 = Mat::ones(3, 3, CV_32FC1);
    
    cout << mattt << endl;
    cout << mat3 * mat4 << endl;
    cout << mat3.mul(mat4) << endl;

    return 0;
}