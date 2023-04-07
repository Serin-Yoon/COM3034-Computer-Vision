#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat m1 = Mat_<float>({3, 2}, {1, 1, 2, 2, 3, 3});
    Mat_<float> m2(2, 3);
    m2 << 0.1f, 5.1f, -0.2f, 0.1f, 4.1f, -0.3f;

    cout << m1 << endl;
    cout << m2 << endl;

    return 0;
}