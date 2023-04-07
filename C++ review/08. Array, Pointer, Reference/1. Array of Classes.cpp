#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int x;
        int y;
    public:
        Unit(int a) { x = a; y = a; }
        void Print() { cout << x << ", " << y << endl; }
};

int main() {
    Unit aUnit[2] = { Unit(1), Unit(2) };
    for (int i = 0; i < 2; i++) {
        aUnit[i].Print();
    }
    return 0;
}