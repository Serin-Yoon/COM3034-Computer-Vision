#include <iostream>
#include <string>

using namespace std;

int main() {
    float result = 0;
    float real_result = 0;

    // without type conversion: 0 * 100
    result = (30 / 40) * 100;
    cout << "Result: " << result << endl;

    // with type conversion: 0.75 * 100
    real_result = (float)30 / 40 * 100;
    cout << "Real Result: " << real_result << endl;

    return 0;
}