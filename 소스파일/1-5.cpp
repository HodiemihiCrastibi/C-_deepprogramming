#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // 사용자로부터 정수 n을 입력받음
    int a = 0, b = 1, c; // 피보나치 수열의 첫 번째 항과 두 번째 항을 초기화
    if (n == 0) { // 만약 n이 0인 경우, 0을 출력하고 프로그램 종료
        cout << a;
    }
    else if (n == 1) {  // 만약 n이 1인 경우, 1을 출력하고 프로그램 종료
        cout << b;
    }
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b; // 결과값 출력
    }
    return 0;
}
