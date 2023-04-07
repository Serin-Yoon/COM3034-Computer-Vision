#include <iostream>
#include <string>

using namespace std;

struct Student {
    int id;
    float grade;
};

int main() {
    struct Student st;
    cout << "학번: ";
    cin >> st.id;

    cout << "성적: ";
    cin >> st.grade;

    cout << "학번: " << st.id << endl;
    cout << "성적: " << (float)st.grade << endl;

    cout.setf(ios::showpoint); // print floating point
    cout.precision(2); // set the decimal precision

    return 0;
}