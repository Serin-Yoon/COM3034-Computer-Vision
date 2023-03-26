#include <iostream>
#include <string>

using namespace std;

void swap(int *x, int *y) {
    int t; // temp
    t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int i = 4;
    int j = 7;

    cout << "i: " << i << " j: " << j << endl;
    swap(&i, &j); // 변수의 주소값 넘겨줌
    cout << "i: " << i << " j: " << j << endl;

    return 0;
}