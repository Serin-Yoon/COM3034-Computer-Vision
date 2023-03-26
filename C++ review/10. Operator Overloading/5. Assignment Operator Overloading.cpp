#include <iostream>
#include <string>

using namespace std;

#define MAX_LEN 255

class Unit {
    private:
        char *pszName;
    public:
        Unit() {
            pszName = new char[MAX_LEN]; // Memory allocation
            cout << "Normal Constructor" << endl;
        }
        ~Unit() {
            if (!pszName) {
                delete [] pszName; // Memory deallocation
                pszName = NULL;
            }
        }
        void Print() { cout << pszName << endl; }
        void Set(char* pszIn) { strcpy(pszName, pszIn); }
        Unit& operator=(Unit &right);
};

Unit& Unit::operator=(Unit &right) {
    cout << "Operator called" << endl;
    strcpy(pszName, right.pszName);
    return (*this);
}

int main() {
    Unit A, B;

    A.Set("zerging");
    A.Print();

    B = A; // Copy constructor 대신 operator overload
    B.Print();

    return 0;
}