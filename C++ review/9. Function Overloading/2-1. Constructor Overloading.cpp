#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int x;
        int y;
    public:
        Unit() {
            x = 0;
            y = 0;
        }
        // Constructor Overloading
        Unit(int a, int b) {
            x = a;
            y = b;
        }
        int GetX() {
            return x;
        }
        int GetY() {
            return y;
        }
};

int main() {
    Unit A;
    Unit B(10, 20);

    cout << "A: " << A.GetX() << ", " << A.GetY() << endl;
    cout << "B: " << B.GetX() << ", " << B.GetY() << endl;

    return 0;
}