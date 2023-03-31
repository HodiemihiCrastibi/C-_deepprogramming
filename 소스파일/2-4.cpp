#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "문자열을 입력하세요: ";
    getline(cin, str); // 공백이 포함된 문자열 입력 받기
    int len = str.length();

    cout << "반대로 출력 :";
    // 문자열 뒤집기
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    // cout << endl;

    return 0;
}