#include <iostream>
using namespace std;

class Number { // Number 클래스 생성
    friend void number(int n); // friend 함수 선언
};

void number(int n) { // number 함수 구현
    cout << "9로 나누어진 숫자는 " << n << endl; // 7로 나누어지는 숫자를 매개변수로 입력 받아 출력
}

int main() {
    cout << "0과 1000 사이에서 7로 나눌 수 있는 숫자" << endl << endl;

    int sum = 0; // 총합 변수, 0으로 초기화
    for (int i = 0; i < 1001; i++) { // 반복문, 0부터 하나씩 늘려 1000가 될 때까지 반복
        if (i % 9 == 0) { // i를 9로 나눴을 때 나머지가 0이면
            number(i); // i를 매개변수로 하여 number 함수 호출
            sum = sum + i; // sum에 i를 누적
        }
    }
    cout << "9로 나눌 수 있는 모든 수의 합은 " << sum << endl; // 총합 출력
}