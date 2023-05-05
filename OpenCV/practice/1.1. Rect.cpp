#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Rect rectA(30, 40, 100, 200);
    Rect rectB = rectA + Point(10, 15) + Size(20, 30);
    Rect rectC = rectA | rectB;

    cout << "rectA: " << rectA << endl;
    cout << "rectB: " << rectB << endl;
    cout << "rectC: " << rectC << endl;

    return 0;
}