#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat A = imread("OpenCV/images/cat.bmp");
    Mat B = A.clone();

    Mat A_t = A(Rect(250, 100, 300, 200));
    Mat B_t = B(Rect(250, 100, 300, 200));

    if (A.empty()) {
        cerr << "Image load failed" << endl;
        return -1;
    }

    imshow("A", A);
    addWeighted(A_t, 0.8, B_t, 0.6, 0, B(Rect(250, 100, 300, 200)));
    imshow("B", B);

    waitKey();
    return 0;
}
