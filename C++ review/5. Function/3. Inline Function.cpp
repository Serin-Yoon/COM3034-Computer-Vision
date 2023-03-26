#include <iostream>
#include <string>

using namespace std;

inline int inc(int x) {
    return x+1;
}

int main() {
    int i;
    cout << "Number: ";
    cin >> i;
    cout << "Result: " << inc(i) << endl;
    return 0;
}