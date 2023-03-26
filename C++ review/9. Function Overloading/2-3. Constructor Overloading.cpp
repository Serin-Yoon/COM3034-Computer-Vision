#include <iostream>
#include <string>

using namespace std;

class Circle {
    private:
        double radius;
    public:
        Circle(int agRadius) : radius(agRadius) {} // int type constructor
        Circle(double agRadius) : radius(agRadius) {} // double type constructor
        double CalculateArea() {
            return radius * radius * 3.14;
        }
};

int main() {
    Circle circle1(5);
    Circle circle2(5.5);

    cout << "Circle1: " << circle1.CalculateArea() << endl;
    cout << "Circle2: " << circle2.CalculateArea() << endl;

    return 0;
}