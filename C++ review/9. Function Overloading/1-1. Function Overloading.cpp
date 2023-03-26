#include <iostream>
#include <string>

using namespace std;

int Add(int argNum1, int argNum2) {
    cout << "Add(int argNum1, int argNum2) is called" << endl;
    return argNum1 + argNum2;
}

double Add(double argNum1, double argNum2) {
    cout << "Add(double argNum1, double argNum2) is called" << endl;
    return argNum1 + argNum2;
}

double Add(int argNum1, double argNum2) {
    cout << "Add(int argNum1, double argNum2) is called" << endl;
    return argNum1 + argNum2;
}

int main() {
    Add(1, 1);
    Add(1.0, 1.0);
    Add(1, 1.0);
    return 0;
}