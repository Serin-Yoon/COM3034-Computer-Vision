#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    Mat src = imread("OpenCV/images/dog.bmp", IMREAD_GRAYSCALE);
    if (src.empty()) {
        cerr << "Image load failed!" << endl;
        return -1;
    }
    imshow("src", src);

    Mat dst;
    for (int sigma = 1; sigma <= 5; sigma++) {
        GaussianBlur(src, dst, Size(), (double)sigma);
        String text = format("sigma = %d", sigma);
        putText(dst, text, Point(10, 30), FONT_HERSHEY_SIMPLEX, 1.0, Scalar(255), 1, LINE_AA);
        imshow("dst", dst);
        waitKey(0);
    }
    
    return 0;
}