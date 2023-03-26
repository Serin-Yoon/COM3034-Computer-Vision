#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int x;
        int y;
    public:
        Unit(int a, int b) {
            x = a;
            y = b;
        }
        void Print() {
            cout << x << ", " << y << endl;
        }
};

int main() {
    Unit aUnit[2] = { Unit(1, 2), Unit(3, 4) }; // Class array
    Unit *pUnit = aUnit; // Object pointer. aUnit[0] 저장된 주소 값 저장
    
    cout << "Using '->' operator" << endl;
    for (int i = 0; i < 2; i++) {
        pUnit->Print();
        pUnit++; // aUnit[1]로 이동
    }

    pUnit = aUnit; // aUnit[0]로 이동

    cout << "Using '.' operator" << endl;
    for (int i = 0; i < 2; i++) {
        (*pUnit).Print();
        pUnit++; // aUnit[1]로 이동
    }

    return 0;
}