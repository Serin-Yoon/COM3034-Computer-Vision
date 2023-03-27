#include <iostream>
#include <string>

using namespace std;

#define MAX_SIZE 50

template <typename T>

class Stack {
    T data[MAX_SIZE];
    int nCount;
    public:
        Stack() { nCount = 0; }
        void add(T in) {
            data[nCount++] = in;
            if (nCount == MAX_SIZE) {
                cout << "overflow: " << nCount << endl;
            }
        }
        T pop(void) {
            if (nCount <= 0) {
                cout << "empty" << endl;
                return data[0];
            }
            else {
                return data[--nCount];
            }
        }
};

int main() {
    Stack<int> stack1; // int Stack array
    Stack<float> stack2; // float Stack array

    // 0 ~ 9 add
    for (int i = 0; i < 10; i++) {
        stack1.add(i);
    }

    // 0.0 ~ 9.6 add
    for (float j = 0; j < 10; j+=.4) {
        stack2.add(j);
    }

    cout << "Stack 1: ";
    for (int i = 0; i < 10; i++) {
        cout << stack1.pop() << " ";
    }

    cout << endl;

    cout << "Stack 2: ";
    for (int i = 0; i < 10; i++) {
        cout << stack2.pop() << " ";
    }

    cout << endl;

    return 0;
}