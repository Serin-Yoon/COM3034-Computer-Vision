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
        friend Unit operator+(Unit left, Unit right); // friend function
};

Unit operator+(Unit left, Unit right) {
    Unit temp;
    temp.hp = left.hp + right.hp;

    cout << "left hp: " << left.hp << endl;
    cout << "right hp: " << right.hp << endl;
    cout << "result hp: " << temp.hp << endl;

    return temp;
}

int main() {
    Unit Unit1(1), Unit2(5), Unit3;
    Unit3 = Unit1 + Unit2;
    return 0;
}