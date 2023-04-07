#include <iostream>
#include <string>

using namespace std;

class Unit {
    public:
        int defaultArmor;
        Unit(int armor) { defaultArmor = armor; }
        int GetDefaultArmor() { return defaultArmor; }
};

// Class = Function parameter
int GetEnhancedArmor(Unit aUnit) {
    return aUnit.GetDefaultArmor() * 2;
}

// Class address = Function parameter
int GetEnhancedArmor2(Unit &aUnit) {
    return aUnit.GetDefaultArmor() * 2;
}

int main() {
    Unit A(1), B(2);

    cout << "Unit A: " << GetEnhancedArmor(A) << endl;
    cout << "Unit B: " << GetEnhancedArmor(B) << endl;
    
    cout << "Unit A: " << GetEnhancedArmor2(A) << endl;
    cout << "Unit B: " << GetEnhancedArmor2(B) << endl;
    return 0;
}