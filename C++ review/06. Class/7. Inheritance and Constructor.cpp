#include <iostream>
#include <string>

using namespace std;

class Base {
    public:
        Base();
        ~Base();
};

Base::Base() {
    cout << "Constructor of Base" << endl;
}

Base::~Base() {
    cout << "Destructor of Base" << endl;
}

class Derived : public Base {
    public:
        Derived();
        ~Derived();
};

Derived::Derived() {
    cout << "Constructor of Derived" << endl;
}

Derived::~Derived() {
    cout << "Destructor of Derived" << endl;
}

int main() {
    Derived obj;
    return 0;
}

/*
Result)
Constructor of Base
Constructor of Derived
Destructor of Derived
Destructor of Base
*/