#include <iostream>
#include <string>

using namespace std;

// Recursive function
int Factorial(int n) {
    if (n==1 or n==2) {
        return n;
    }
    else {
        return n * Factorial(n-1);
    }
}

int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    cout << "Factorial: " << Factorial(num) << endl;
    return 0;
}