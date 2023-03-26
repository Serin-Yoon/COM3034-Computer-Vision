#include <iostream>
#include <string>

using namespace std;

namespace Elementary {
    // Elementary student
    struct Student {
        int id;
        int age;
    };
}

namespace University {
    // University student
    struct Student {
        int id;
        int age;
    };
}

int main() {
    struct Elementary::Student eleStu;
    struct University::Student uniStu;

    cout << "Elementary Student ID: ";
    cin >> eleStu.id;
    cout << "Elementary Student age: ";
    cin >> eleStu.age;

    cout << "University Student ID: ";
    cin >> uniStu.id;
    cout << "University Student age: ";
    cin >> uniStu.age;

    cout << "Elementary Student: " << eleStu.id << ", " << eleStu.age << endl;
    cout << "University Student: " << uniStu.id << ", " << uniStu.age << endl;

    return 0;
}