#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);
    int a = 0, b = 1, c; // 피보나치 수열의 첫 번째 항과 두 번째 항을 초기화
    if (n == 0) {
        printf("%d", a);
    }
    else if (n == 1) {
        printf("%d", b);
    }
    else { // n이 2 이상인 경우, 피보나치 수열을 계산하고 결과값을 출력
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }
    return 0;
}