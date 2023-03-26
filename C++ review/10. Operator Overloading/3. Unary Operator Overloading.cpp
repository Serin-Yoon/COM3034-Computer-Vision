#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int hp;
    public:
        Unit() { hp = 0; }
        Unit(int i ) { hp = i; }
        int GetHP() { return hp; }
        Unit& operator++();
};

// Prefix
Unit& Unit::operator++() {
    hp++;
    return (*this);
}

int main() {
    Unit Unit1(1);

    cout << "Unit1 hp: " << Unit1.GetHP() << endl;
    ++Unit1; // Prefix
    cout << "++Unit1 hp: " << Unit1.GetHP() << endl;
    
    return 0;
}