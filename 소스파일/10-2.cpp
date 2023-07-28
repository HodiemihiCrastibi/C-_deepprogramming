#include<iostream>
using namespace std;

class Pyramid { // Pyramid 클래스 생성
    friend void trans(int m); // friend 함수 선언
};

void trans(int m) { // trans 함수 구현
    char alphabet; // char형 변수 선언
    alphabet = m; // int형 매개변수를 char형으로 변환
    cout << alphabet << " "; // alphabet 출력
}

int main() {
    int n;
    cout << "글자수를 입력하세요(26이하의 숫자) : ";
    cin >> n; // 글자수 입력

    if (n <= 26) { // 입력한 수가 26이하이면
        for (int i = 1; i <= n; i++) { // 입력한 수 만큼 반복
            for (int j = 1; j <= n - i; j++) {
                cout << "  "; // 문자 시작 전 공백
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                trans(65 + i - 1 - (j - i > 0 ? j - i : -1 * (j - i))); // 아스키 코드값 계산
            }
            cout << endl;
        }
        cout << "입력한 글자수 : " << n << endl; // 입력한 글자수 출력
    }
    else { // 26이하의 숫자가 아니면
        cout << "26이하의 숫자를 입력해주세요." << endl; // 에러메세지 출력
    }
}