#include <iostream>
#include <string>

using namespace std;

int main() {
    int var = 1;
    {
        char var = 'a';
        {
            cout << "var 1: " << var << endl;
        }
        cout << "var 2: " << var << endl;
    }
    cout << "var 3: " << var << endl;
    
    return 0;
}