#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int x;
        int y;
    public:
        Unit *p;
        Unit(int a, int b, Unit *p) {
            x = a;
            y = b;
            this->p = p;
        }
        void Print() {
            cout << x << ", " << y << endl;
            if (p != NULL) {
                p->Print();
            }
        }
};

int main() {
    Unit c(5, 6, NULL);
    Unit b(3, 4, &c); // c 저장된 위치 가리키도록
    Unit a(1, 2, &b); // b 저장된 위치 가리키도록

    cout << "[Print a]" << endl;
    a.Print();
    cout << "[Print b]" << endl;
    b.Print();
    cout << "[Print c]" << endl;
    c.Print();

    return 0;
}

/*
Result)
[Print a]
1, 2
3, 4
5, 6
[Print b]
3, 4
5, 6
[Print c]
5, 6
*/