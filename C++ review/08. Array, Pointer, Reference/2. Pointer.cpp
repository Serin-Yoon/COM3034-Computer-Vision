#include <iostream>
#include <string>

using namespace std;

int main() {
    int number = 45;
    int *pNumber = NULL; // 포인터 변수 선언
    pNumber = &number; // 포인터 변수에 변수 저장된 주소 저장
    cout << "Address of number: " << pNumber << endl; // 포인터 변수 값 (주소) 출력
    cout << "Value of number: " << *pNumber << endl; // 포인터 변수가 가리키는 값 출력
}