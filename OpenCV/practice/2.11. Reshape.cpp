#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat m1(2, 6, CV_8U);
    Mat m2 = m1.reshape(2); // 2 channel
    Mat m3 = m1.reshape(3, 2); // 3 channel, 2 row

    m1 = 1;
    cout << endl << "<m1=1>" << endl;
    cout << "m1=" << endl << m1 << endl;
    cout << "m2=" <<endl << m2 << endl;
    cout << "m3=" <<endl << m3 << endl;
    
    m2 = 2;
    cout << endl <<"<m2=2>" << endl;
    cout << "m1=" << endl << m1 << endl;
    cout << "m2=" << endl << m2 << endl;
    cout << "m3=" << endl << m3 << endl;
    
    // 2행 2열
    m3 = 3;
    cout << endl << "<m3=3>" << endl;
    cout << "m1=" << endl << m1 << endl;
    cout << "m2=" << endl << m2 << endl;
    cout << "m3=" << endl << m3 << endl;

    return 0;
}