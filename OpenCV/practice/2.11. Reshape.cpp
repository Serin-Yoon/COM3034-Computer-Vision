#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat m1(2, 6, CV_8U); // 2 x 6 x 1
    Mat m2 = m1.reshape(2); // 2 x 3 x 2
    Mat m3 = m1.reshape(3, 2); // 2 x 2 x 3

    m1 = 1; // m1 모든 픽셀 (1)로 값 바뀜 -> m2, m3도 똑같이 적용됨 (얕은 복사)
    cout << endl << "<m1=1>" << endl;
    cout << "m1=" << endl << m1 << endl; // 2 x 6 x 1
    cout << "m2=" << endl << m2 << endl;  // 2 x 3 x 2
    cout << "m3=" << endl << m3 << endl;  // 2 x 2 x 3
    
    m2 = 2; // m2 모든 픽셀 (2, 0)로 값 바뀜 -> m1, m3도 똑같이 적용됨 (얕은 복사)
    cout << endl <<"<m2=2>" << endl;
    cout << "m1=" << endl << m1 << endl;
    cout << "m2=" << endl << m2 << endl;
    cout << "m3=" << endl << m3 << endl;
    
    m3 = 3; // m3 모든 픽셀 (3, 0, 0)로 값 바뀜 -> m1, m2도 똑같이 적용됨 (얕은 복사)
    cout << endl << "<m3=3>" << endl;
    cout << "m1=" << endl << m1 << endl;
    cout << "m2=" << endl << m2 << endl;
    cout << "m3=" << endl << m3 << endl;

    return 0;
}