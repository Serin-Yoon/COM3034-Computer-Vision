#include <iostream>
#include <string>

using namespace std;

class Unit {
    char *str;
    public:
        Unit() {
            str = NULL;
        }
        Unit(char *agStr) {
            str = new char[strlen(agStr) + 1];
            strcpy(str, agStr);
            // str = agStr; 하면 안 됨
        }
        void set(char *agStr) {
            strcpy(str, agStr);
        }
        void show() {
            cout << str << endl;
        }
};

int main() {
    Unit A("Test 1");
    Unit B = A; // Class Copy
    A.set("Test 2");
    A.show();
    B.show();
    return 0;
}