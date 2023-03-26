#include <iostream>
#include <string>

using namespace std;

class Unit {
    int level;
    public:
        Unit() {
            level = 0;
        }
        Unit(int n) {
            level = n;
        }
        int GetLevel() {
            return level;
        }
};

int main() {
    Unit A[4];
    Unit B[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; i++) {
        cout << "A[" << i << "]: " << A[i].GetLevel() << endl;
        cout << "B[" << i << "]: " << B[i].GetLevel() << endl;
    }

    return 0;
}