#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "문자열 입력 : ";
    cin >> input; // 사용자로부터 문자열 입력받기

    for (int i = 1; i <= input.length(); i++) { // 문자열의 길이만큼 반복
        cout << input.substr(0, i) << endl; // 0번째부터 i번째까지의 부분 문자열 출력
    }

    return 0;
}