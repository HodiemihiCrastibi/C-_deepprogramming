#include <iostream>

// ����
int add(int a, int b) {
    return a + b;
}

// ����
int subtract(int a, int b) {
    return a - b;
}

// ����
int multiply(int a, int b) {
    return a * b;
}

// ������
int divide(int a, int b) {
    return a / b;
}

// ������
int remainder(int a, int b) {
    return a % b;
}

int main()
{
    int a, b;
    char op;

    // ����ڷκ��� �Է� �ޱ�
    std::cout << "�� ������ �����ڸ� �Է��ϼ��� : ";
    while (std::cin >> a >> b >> op) {  // ����ڷκ��� �Է��� �ް�, �Է��� �����ϸ� �ݺ��� ����
        // �Էµ� ���� ����
        switch (op) {
        case '+':
            std::cout << add(a, b) << std::endl;  // ���� ����
            break;
        case '-':
            std::cout << subtract(a, b) << std::endl;  // ���� ����
            break;
        case '*':
            std::cout << multiply(a, b) << std::endl;  // ���� ����
            break;
        case '/':
            std::cout << divide(a, b) << std::endl;  // ������ ����
            break;
        case '%':
            std::cout << remainder(a, b) << std::endl;  // ������ ��� ����
            break;
        default:
            std::cout << "�߸��� �������Դϴ�." << std::endl;  // �ùٸ��� ���� �����ڰ� �ԷµǾ��� �� ó��
            break;
        }
        std::cout << "�� ������ �����ڸ� �Է��ϼ��� : ";  // ���� �Է��� �ޱ� ���� �ȳ� ���� ���
    }

    return 0;
}


