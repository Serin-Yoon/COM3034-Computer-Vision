#include <iostream>
#include <string>

using namespace std;

template <typename X, typename Y>

X avg(X a, Y b) {
    X ret = (a + b) / 2;
    cout << "avg: " << ret << endl;
    return ret;
}

int main() {
    int x1 = 10;
    int x2 = 0;
    float x3 = 5.1f;

    avg(x1, x2); // int, int => int
    avg(x1, x3); // int, float => int

    return 0;
}