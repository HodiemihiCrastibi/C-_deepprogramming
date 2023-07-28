#include <iostream>
using namespace std;

char& find(char a[], char c, bool& success) {
    // for 루프를 이용하여 문자열 a를 검색한다.
    for (int i = 0; a[i] != '\0'; i++) { 
        if (a[i] == c) { // 문자 c를 찾으면
            success = true; // success 참조 매개변수에 true를 설정하고
            return a[i]; // 해당 문자가 있는 공간에 대한 참조를 반환한다.
        }
    }
    success = false; // success 참조 매개변수에 false를 설정하고
    return a[0]; // 문자에 대한 참조를 반환한다.
}

int main() {
    char a[] = "DonggukUniv";
    char c;
    bool success;

    cout << "찾을 문자를 입력하세요: ";
    cin >> c;

    char& result = find(a, c, success); // 문자 c가 있는 공간에 대한 참조를 가져온다.

    if (success) {
        cout << "문자 " << c << " 가 문자열 " << a << " 에서 위치 " << &result - a << " 에 있습니다." << endl;
    }
    else {
        cout << "문자 " << c << " 가 문자열 " << a << " 에서 찾지 못했습니다." << endl;
    }

    return 0;
}