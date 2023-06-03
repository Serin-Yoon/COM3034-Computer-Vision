#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Size sz1;
    sz1.width = 5;   // y
    sz1.height = 10; // x
    Size sz2(10, 20);
    Size sz3 = sz1 + sz2;
    Size sz4 = sz1 * 2;
    int area1 = sz4.area();

    cout << "sz1: " << sz1 << endl;
    cout << "sz2: " << sz2 << endl;
    cout << "sz3: " << sz3 << endl;
    cout << "sz4: " << sz4 << endl;
    cout << "area1: " << area1 << endl;

    return 0;
}