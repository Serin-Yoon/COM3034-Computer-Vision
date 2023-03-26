#include <iostream>
#include <string>

using namespace std;

class HUnit; // 미리 선언 안 하면 Unit 클래스 함수에서 error

class Unit {
    int x, y;
    public:
        Unit(int i, int j) { x = i; y = j; }
        friend bool isSame(Unit a, HUnit b);
};

class HUnit {
    int x, y;
    public:
        HUnit(int i, int j) { x = i; y = j; }
        friend bool isSame(Unit a, HUnit b);
};

bool isSame(Unit a, HUnit b) {
    if (a.x == b.x && a.y == b.y) return true;
    else return false;
}

int main() {
    Unit a(1, 2);
    HUnit b(1, 2);
    cout << isSame(a, b) << endl;
    return 0;
}