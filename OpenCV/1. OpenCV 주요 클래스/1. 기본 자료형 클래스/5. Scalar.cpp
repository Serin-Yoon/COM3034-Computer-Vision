#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {

    /*
    Scalar(밝기)
    Scalar(B, G, R)
    Scalar(B, G, R, alpha)
    */
    
    Scalar gray = 128;
    cout << "gray: " << gray << endl; // [128, 0, 0, 0]

    Scalar yellow(0, 255, 255);
    cout << "yellow: " << yellow << endl;

    for (int i = 0; i < 4; i++) {
        cout << yellow[i] << endl;
    }

    return 0;
}