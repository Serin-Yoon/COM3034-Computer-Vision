#include <iostream>
#include <string>

using namespace std;

class Unit {
    int status;
    public:
        Unit(); // Constructor
        ~Unit(); // Destructor
        void printStatus();
};

Unit::Unit() {
    cout << "Constructor" << endl;
    status = 1;
}

Unit::~Unit() {
    cout << "Destructor" << endl;
    status = 0;
}

void Unit::printStatus() {
    cout << "Status: " << status << endl;
}

int main() {
    Unit u;
    u.printStatus();
    return 0;
}