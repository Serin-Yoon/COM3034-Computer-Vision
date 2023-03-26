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
    Unit *pUnit = new Unit(1, 2);
    pUnit->Print(); // (*pUnit).Print()와 동일
    delete pUnit;
    return 0;
}