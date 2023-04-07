#include <iostream>
#include <string>

using namespace std;

int g_var = 1;

int main() {
    int l_var = 2;
    cout << "global: " << g_var << ", local: " << l_var << endl;
    return 0;
}