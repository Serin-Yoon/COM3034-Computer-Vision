#include <iostream>
#include <string>

using namespace std;

void printMsg(char msg[20]);

int main() {
    printMsg("Hello World!");
    return 0;
}

void printMsg(char msg[20]) {
    cout << msg << endl;
}