#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    
    /*
        연립방정식 연산
        2x + y + z = 3
        4x - 6y = 10
        -2x + 7y + 2z = -5
    */

    float A[] = { 2, 1, 1, 4, -6, 0, -2, 7, 2 };
    float B[] = { 3, 10, -5 };

    Mat mA(3, 3, CV_32FC1, A);
    Mat mB(3, 1, CV_32FC1, B);
    Mat result;

    // A * result = B
    // result = A^-1 * B
    result = mA.inv() * mB;
    
    /*Fill these lines*/

    cout << result << endl;
    
    return 0;
}