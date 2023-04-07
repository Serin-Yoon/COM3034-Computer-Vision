#include <iostream>
#include <string>

using namespace std;

#define MAX_LEN 255

class Unit {
    char *pszName;
    public:
        Unit() {
            pszName = new char[MAX_LEN]; // Memory allocation
            cout << "Normal Constructor" << endl;
        }
        ~Unit() {
            delete [] pszName; // Memory delete
        }
        Unit(const Unit &unit);
        void Print() {
            cout << pszName << endl;
        }
        void Set(char *pszIn) {
            strcpy(pszName, pszIn);
        }
};

Unit::Unit(const Unit &unit) {
    pszName = new char[MAX_LEN];
    strcpy(pszName, "Untitled");
    cout << "Copy Constructor" << endl;
}

int main() {
    Unit A;
    A.Set("zergling");
    A.Print();

    Unit B = A; // call copy constructor
    B.Print();

    // B = A 하면 shallow copy (not copy constructor)

    return 0;
}