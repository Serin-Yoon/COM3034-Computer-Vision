#include <iostream>
#include <string>

using namespace std;

namespace Student {
    int id = 0;
    int age = 8;
    char grade = 'A';
}

using namespace Student;

int main() {
    // 반복적으로 Student:: 해줄 필요 없음
    cout << "ID: " << id << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}