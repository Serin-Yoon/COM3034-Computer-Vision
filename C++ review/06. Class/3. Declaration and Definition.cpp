#include <iostream>
#include <string>

using namespace std;

class Quadrangle {
    private:
        int width;
        int height;
        int area;
    public:
        int CalculateArea(int argWidth, int argHeight); // Declaraition
};

// Definition: Class 밖에서 정의하기 위해 :: 사용
int Quadrangle::CalculateArea(int argWidth, int argHeight) {
    width = argWidth;
    height = argHeight;
    area = width * height;
    return area;
}

int main() {
    Quadrangle cQ;
    cout << cQ.CalculateArea(10, 5) << endl;
    return 0;
}