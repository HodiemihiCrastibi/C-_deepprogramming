#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int upperCount = 0, lowerCount = 0, digitCount = 0, length = 0;

    cout << "문자열 입력 : ";
    getline(cin, str);  // 공백이 포함된 문자열을 입력받기 위해 getline 함수 사용

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i]))  // 대문자인 경우
            upperCount++;
        else if (islower(str[i]))  // 소문자인 경우
            lowerCount++;
        else if (isdigit(str[i]))  // 숫자인 경우
            digitCount++;
    }
    length = str.length();  // 문자열 길이 저장

    cout << "알파벳 대문자의 갯수: " << upperCount << endl;
    cout << "알파벳 소문자의 갯수: " << lowerCount << endl;
    cout << "숫자의 갯수 : " << digitCount << endl;
    cout << "문자열 길이: " << length << endl;

    return 0;
}
