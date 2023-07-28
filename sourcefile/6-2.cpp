#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void reverseDigit(int& num) { // 주어진 숫자를 뒤집는 함수
    int reversed = 0;
    while (num > 0) {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }
    num = reversed;
}

int main() {
    srand(time(NULL));    // 시드값 설정
    int minsoo = 123456;
    int chulsoo = 778899;

    // 민수와 철수의 숫자 출력
    cout << "민수의 숫자: " << minsoo << endl;
    cout << "철수의 숫자: " << chulsoo << endl;

    // swap  민수와 철수의 숫자 교환
    int temp = minsoo;
    minsoo = chulsoo;
    chulsoo = temp;

    cout << "숫자를 서로 교환했습니다." << endl;
    cout << "숫자를 거꾸로 변경했습니다." << endl;

    cout << "민수의 숫자: ";
    reverseDigit(minsoo);
    cout << minsoo << endl;

    cout << "철수의 숫자: ";
    reverseDigit(chulsoo);
    cout << chulsoo << endl;

    return 0;
}
