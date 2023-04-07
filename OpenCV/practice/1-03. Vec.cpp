#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Vec2i a(1, 2), aa;      // int
    Vec2d b(4.0, 3.0), bb;  // double

    aa = a + (Vec2i)b;
    bb = (Vec2d)a - b;
    
    cout << aa << endl;
    cout << bb << endl;

    return 0;
}