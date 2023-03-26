#include <iostream>
#include <string>

using namespace std;

class Unit {
    int x, y;
    public:
        void set(int i, int j) { x = i; y = j; }
        void show() { cout << x << ", " << y << endl; }
};

int main() {
    Unit A, B;
    A.set(12, 4);
    B = A;
    A.show();
    B.show();
    return 0;
}