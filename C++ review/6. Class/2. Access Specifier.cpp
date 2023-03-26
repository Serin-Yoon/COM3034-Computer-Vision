#include <iostream>
#include <string>

using namespace std;

class Quadrangle {
    private:
        int width;
        int height;
        int area;
    public:
        int CalculateArea(int argWidth, int argHeight) {
            width = argWidth;
            height = argHeight;
            area = width * height;
            return area;
        }
};

int main() {
    Quadrangle cQ;
    cout << cQ.CalculateArea(10, 5) << endl;
    return 0;
}