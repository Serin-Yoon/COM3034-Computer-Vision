#include <iostream>
#include <string>

using namespace std;

class Unit {
    int status;
    public:
        Unit(int a); // Constructor
        ~Unit(); // Destructor
        void printStatus();
};

Unit::Unit(int a) {
    cout << "Constructor: " << a << endl;
    status = a;
}

Unit::~Unit() {
    cout << "Destructor" << endl;
    status = 0;
}

void Unit::printStatus() {
    cout << "Status: " << status << endl;
}

int main() {
    Unit u(5);
    u.printStatus();
    return 0;
}