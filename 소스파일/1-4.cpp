#include <stdio.h>

int main() {
    int n;
    scanf_s("%d", &n);
    int a = 0, b = 1, c; // �Ǻ���ġ ������ ù ��° �װ� �� ��° ���� �ʱ�ȭ
    if (n == 0) {
        printf("%d", a);
    }
    else if (n == 1) {
        printf("%d", b);
    }
    else { // n�� 2 �̻��� ���, �Ǻ���ġ ������ ����ϰ� ������� ���
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d", b);
    }
    return 0;
}