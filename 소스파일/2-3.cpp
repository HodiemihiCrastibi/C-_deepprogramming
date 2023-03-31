#include <iostream>

// 덧셈
int add(int a, int b) {
    return a + b;
}

// 뺄셈
int subtract(int a, int b) {
    return a - b;
}

// 곱셈
int multiply(int a, int b) {
    return a * b;
}

// 나눗셈
int divide(int a, int b) {
    return a / b;
}

// 나머지
int remainder(int a, int b) {
    return a % b;
}

int main()
{
    int a, b;
    char op;

    // 사용자로부터 입력 받기
    std::cout << "두 정수와 연산자를 입력하세요 : ";
    while (std::cin >> a >> b >> op) {  // 사용자로부터 입력을 받고, 입력이 성공하면 반복문 실행
        // 입력된 연산 수행
        switch (op) {
        case '+':
            std::cout << add(a, b) << std::endl;  // 덧셈 수행
            break;
        case '-':
            std::cout << subtract(a, b) << std::endl;  // 뺄셈 수행
            break;
        case '*':
            std::cout << multiply(a, b) << std::endl;  // 곱셈 수행
            break;
        case '/':
            std::cout << divide(a, b) << std::endl;  // 나눗셈 수행
            break;
        case '%':
            std::cout << remainder(a, b) << std::endl;  // 나머지 계산 수행
            break;
        default:
            std::cout << "잘못된 연산자입니다." << std::endl;  // 올바르지 않은 연산자가 입력되었을 때 처리
            break;
        }
        std::cout << "두 정수와 연산자를 입력하세요 : ";  // 다음 입력을 받기 위한 안내 문구 출력
    }

    return 0;
}


