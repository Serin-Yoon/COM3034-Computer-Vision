#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Rect rc1;                       // [0 x 0 from (0, 0)]
    Rect rc2(10, 10, 60, 40);       // [60 x 40 from (10, 10)]
    Rect rc3 = rc1 + Size(50, 40);  // [50 x 40 from (0, 0)]
    Rect rc4 = rc2 + Point(10, 10); // [60 x 40 from (20, 20)]
    Rect rc5 = rc3 & rc4;           // [30 x 20 from (20, 20)]
    Rect rc6 = rc3 | rc4;           // [80 x 60 from (0, 0)]

    cout << "rc1: " << rc1 << endl;
    cout << "rc2: " << rc2 << endl;
    cout << "rc3: " << rc3 << endl;
    cout << "rc4: " << rc4 << endl;
    cout << "rc5: " << rc5 << endl;
    cout << "rc6: " << rc6 << endl;


    return 0;
}