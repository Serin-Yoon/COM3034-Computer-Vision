#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int hp;
    public:
        Unit() { hp = 0; }
        Unit(int i) { hp = i; }
        int GetHP() { return hp; }
        int operator==(Unit right); // 비교 연산자 overloading
};

int Unit::operator==(Unit right) {
    if (hp == right.GetHP()) return 1;
    else return 0;
}

int main() {
    Unit Unit1(10), Unit2(5), Unit3(5);

    if (Unit1 == Unit2)
        cout << "Unit1 == Unit2" << endl;
    else
        cout << "Unit1 != Unit2" << endl;
    
    if (Unit2 == Unit3)
        cout << "Unit2 == Unit3" << endl;
    else
        cout << "Unit2 != Unit3" << endl;
}