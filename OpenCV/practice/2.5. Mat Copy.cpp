#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat A(200, 200, CV_8UC3, Scalar(255, 255, 255));
    
    // Shallow copy
    Mat B(A);
    
    // Deep copy
    Mat C;
    C = A.clone();

    // Shallow copy
    Mat D;
    D = A;

    // Deep copy
    Mat E;
    A.copyTo(E);

    A.setTo(Scalar(0, 255, 0));

    imshow("A", A);
    imshow("B", B);
    imshow("C", C);
    imshow("D", D);
    imshow("E", E);
    
    waitKey();
    destroyAllWindows();

    return 0;
}