#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // ����ڷκ��� ���� n�� �Է¹���
    int a = 0, b = 1, c; // �Ǻ���ġ ������ ù ��° �װ� �� ��° ���� �ʱ�ȭ
    if (n == 0) { // ���� n�� 0�� ���, 0�� ����ϰ� ���α׷� ����
        cout << a;
    }
    else if (n == 1) {  // ���� n�� 1�� ���, 1�� ����ϰ� ���α׷� ����
        cout << b;
    }
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << b; // ����� ���
    }
    return 0;
}
