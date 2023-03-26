#include <iostream>
#include <string>

using namespace std;

class Fish {
    public:
        void Swim() {
            cout << "Swim~" << endl;
        }
};

int main() {
    Fish fish; // Instance
    fish.Swim();
    return 0;
}