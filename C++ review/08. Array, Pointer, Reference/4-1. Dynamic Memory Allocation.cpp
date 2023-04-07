#include <iostream>
#include <string>

using namespace std;

int main() {
    int *pInteger = NULL;
    pInteger = new int;
    if (!pInteger) {
        cout << "Allocation failed" << endl;
        return -1;
    }
    *pInteger = 777;
    cout << "pInteger: " << *pInteger << endl;
    delete pInteger;
    return 0;
}