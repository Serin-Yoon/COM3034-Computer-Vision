#include <iostream>
#include <string>

using namespace std;

class Unit {
    int defaultArmor;
    public:
        void Show() { cout << "defaultArmor: " << defaultArmor << endl; }
        void Set(int armor) { defaultArmor = armor; }
};

// Unit 자료형 반환하는 function
Unit GetUnit() {
    int armor;
    Unit temp;
    cout << "Enter a default armor: ";
    cin >> armor;
    temp.Set(armor);
    return temp;
}

int main() {
    Unit a;
    a = GetUnit();
    a.Show();
    return 0;
}