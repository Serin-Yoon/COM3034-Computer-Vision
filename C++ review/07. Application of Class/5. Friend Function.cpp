#include <iostream>
#include <string>

using namespace std;

class Unit {
    int x, y;
    public:
        Unit(int i, int j) { x = i; y = j; }
        bool isSame();
        friend bool isSame2(Unit u);
};

// Friend function X
// main 함수에서 바로 x, y 값 접근 불가하고 이 함수를 통해 접근 가능
bool Unit::isSame() {
    if (x == y) return true;
    else return false;
}

// Friend function O
// main 함수에서 바로 접근 가능
bool isSame2(Unit u) {
    if (u.x == u.y) return true;
    else return false;
}

int main() {
    Unit A(1, 2), B(3, 3);

    cout << "A(1, 2): " << A.isSame() << endl;
    cout << "B(3, 3): " << B.isSame() << endl;

    cout << "A(1, 2): " << isSame2(A) << endl;
    cout << "B(3, 3): " << isSame2(B) << endl;

    return 0;
}