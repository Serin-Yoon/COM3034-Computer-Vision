#include <iostream>
#include <string>

using namespace std;

// Reference : &x = i, &y = j
void swap(int &x, int &y) {
    int t;
    t = x;
    x = y;
    y = t;
}

int main() {
    int i = 4;
    int j = 7;

    cout << "i: " << i << " j: " << j << endl;
    swap(i, j); // 변수 자체 넘겨줌
    cout << "i: " << i << " j: " << j << endl;

    return 0;
}