#include <iostream>
#include <string>

using namespace std;

class NPC {
    int defense;
    public:
        void SetDefense(int n);
        int GetDefense();
};

// NPC class 상속
class Grunt : public NPC {
    int armor;
    public:
        void SetArmor(int n);
        int GetArmoredDefense();
};

void NPC::SetDefense(int n) {
    defense = n;
}

int NPC::GetDefense() {
    return defense;
}

void Grunt::SetArmor(int n) {
    armor = n;
}

int Grunt::GetArmoredDefense() {
    return armor + GetDefense(); // NPC 상속받았으므로 NPC 함수 사용 가능
}

int main() {
    Grunt g;
    g.SetDefense(10);
    g.SetArmor(20);
    cout << "Get Armored Defense: " << g.GetArmoredDefense() << endl;
    return 0;
}