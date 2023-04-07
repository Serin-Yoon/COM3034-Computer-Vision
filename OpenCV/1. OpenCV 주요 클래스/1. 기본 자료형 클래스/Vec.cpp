#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Vec<uchar, 3> p1, p2(0, 0, 255); // unsigned char (= Vec3b)
    p1.val[0] = 100; // (= p1[0] = 100)
    cout << p1 << endl;
    cout << p2 << endl;
    return 0;
}