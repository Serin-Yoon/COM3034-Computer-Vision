#include <iostream>
#include <string>

using namespace std;


class Unit {
    char *str;
    public:
        Unit() {
            cout << "Default constructor" << endl;
            str = NULL;
        }
        Unit(char *agStr) {
            cout << "Default constructor with parameters" << endl;
            str = new char[strlen(agStr) + 1];
            strcpy(str, agStr);
        }
        // Copy Constructor (to copy Unit object)
        Unit(Unit &agUnit) {
            cout << "User-defined copy constructor" << endl;
            /* Shallow Copy */
            // str = agUnit.str;
            /* Deep Copy */
            str = new char[strlen(agUnit.str) + 1];
            strcpy(str, agUnit.str);
        }
        void set(char* agStr) {
            strcpy(str, agStr);
        }
        void show() {
            cout << str << endl;
        }
};

int main() {
    Unit A("Test 1");
    Unit B = A; // B(A), Unit(Unit &agUnit)
    A.set("Test 2");
    A.show();
    B.show();
    return 0;
}