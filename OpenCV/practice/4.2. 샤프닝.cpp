#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

void blurUser1(Mat src, Mat& dst, int ksize) {
    blur(src, dst, Size(ksize, ksize));
}

int main() {

    Mat img = imread("OpenCV/images/lenna.bmp", IMREAD_GRAYSCALE);
    Mat blur, unsharp1, unsharp2, unsharp3;

    blurUser1(img, blur, 3);
    unsharp1 = img + (img - blur);
    unsharp2 = img + 2 * (img - blur);
    unsharp3 = img + 3 * (img - blur);

    imshow("unsharp1", unsharp1);
    imshow("unsharp2", unsharp2);
    imshow("unsharp3", unsharp3);

    waitKey();
    return 0;
}