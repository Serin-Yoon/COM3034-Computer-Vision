#include <iostream>
#include <string>

using namespace std;

class Triangle {
    int width;
    int height;
    public:
        Triangle() {}
        Triangle(int argWidth, int argHeight) : width(argWidth), height(argHeight){}
        int GetWidth() {
            return width;
        }
        int GetHeight() {
            return height;
        }
};

class Square {
    private:
        int width;
    public:
        Square() {}
        Square(int argSide) : width(argSide) {}
        int GetWidth() {
            return width;
        }
};

class Circle {
    int radius;
    public:
        Circle(){}
        Circle(int argRadius) : radius(argRadius){}
        int GetRadius() {
            return radius;
        }
};

int Calculate(Triangle argTri) {
    return argTri.GetHeight() * argTri.GetWidth() / 2;
}

int Calculate(Square argSquare) {
    return argSquare.GetWidth() * argSquare.GetWidth();
}

double Calculate(Circle argCircle) {
    return argCircle.GetRadius() * argCircle.GetRadius() * 3.14;
}

int main() {
    Triangle tri(5, 2);
    Square square(5);
    Circle circle(5);

    cout << "Area of Traingle: " << Calculate(tri) << endl;
    cout << "Area of Square: " << Calculate(square) << endl;
    cout << "Area of Circle: " << Calculate(circle) << endl;

    return 0;
}
