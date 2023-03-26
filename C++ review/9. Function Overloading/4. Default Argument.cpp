#include <iostream>
#include <string>

using namespace std;

void set(int x = 0, int y = 0) {
    cout << "x: " << x << ", y: " << y << endl;
}

int main() {
    set();
    set(1);
    set(1, 4);
    return 0;
}