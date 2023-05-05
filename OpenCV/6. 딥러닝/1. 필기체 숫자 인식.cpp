#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;
using namespace cv::dnn;

Point ptPrev(-1, -1);

void on_mouse(int event, int x, int y, int flags, void* userdata);

int main() {
    Net net = readNet("models/mnist_cnn.pb");
    if (net.empty()) {
        cerr << "Network load failed!" << endl;
        return -1;
    }

    Mat img = Mat::zeros(400, 400, CV_8UC1);
    imshow("img", img);
    setMouseCallback("img", on_mouse, (void*)&img);

    while (true) {
        int c = waitKey(0);
        // ESC 누르면 종료
        if (c == 27) {
            break;
        }
        // Space 누르면 글씨 인식, 결과 출력
        else if (c == ' ') {
            /* 추론 */
            Mat inputBlob = blobFromImage(img, 1/255.f, Size(28, 28)); // blob 생성
            net.setInput(inputBlob);
            Mat prob = net.forward(); // 추론

            /* 예측 결과 확인 */
            double maxVal;
            Point maxLoc;
            minMaxLoc(prob, NULL, &maxVal, NULL, &maxLoc); // 가장 높은 값, 낮은 위치/값 구함 (내장함수)
            int digit = maxLoc.x;
            cout << digit << " (" << maxVal * 100 << "%)" << endl;

            /* 초기화 */
            img.setTo(0); // 행렬 0으로 초기화
            imshow("img", img);
        }
    }
    return 0;
}

void on_mouse(int event, int x, int y, int flags, void* userdata) {
    Mat img = *(Mat*)userdata;

    if (event == EVENT_LBUTTONDOWN) {
        ptPrev = Point(x, y);
    }
    else if (event == EVENT_LBUTTONUP) {
        ptPrev = Point(-1, -1);
    }
    else if (event == EVENT_MOUSEMOVE && (flags & EVENT_FLAG_LBUTTON)) {
        line(img, ptPrev, Point(x, y), Scalar::all(255), 40, LINE_AA, 0);
        ptPrev = Point(x, y);
        imshow("img", img);
    }
}