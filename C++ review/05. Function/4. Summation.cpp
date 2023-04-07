#include <iostream>
#include <string>

using namespace std;

// Recursive function
int Sum(int n) {
    if (n==1) {
        return 1;
    }
    else {
        return n + Sum(n-1);
    }
}

int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    cout << "Sum: " << Sum(num) << endl;
    return 0;
}