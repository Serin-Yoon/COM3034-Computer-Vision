#include <iostream>
#include <string>

using namespace std;

class Unit {
    private:
        int hp;
        int mp;
        int unitSize;
        char* name;
    public:
        Unit() {
            hp = 0;
            mp = 0;
            unitSize = 0;
            name = NULL;
        }
        Unit(int argHp, int argMp, int argSize, const char* argName) : hp(argHp), mp(argMp), unitSize(argSize) {
            name = new char[strlen(argName) + 1];
            strcpy(name, argName);
        }
        ~Unit() {
            if (!name) {
                delete [] name;
                name = NULL;
            }
        }
        int GetSize() {
            return unitSize;
        }
        int operator+(Unit right); // + operator overloading
};

int Unit::operator+(Unit right) {
    return GetSize() + right.GetSize();
}

class HUnit : public Unit {
    public:
        HUnit() : Unit(45, 125, 2, "HUnit") {}
};

int main() {
    HUnit c1, c2;
    cout << "Total Unit size: " << c1 + c2 << endl;
    return 0;
}