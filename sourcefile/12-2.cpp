#include <iostream>
using namespace std;

class Adder {
protected:
    int add(int a, int b) { return a + b; } // 덧셈 함수
};

class Subtractor {
protected:
    int minus(int a, int b) { return a - b; } // 뺄셈 함수
};

class Calculator : public Adder, public Subtractor {
public:
    int calc(char op, int a, int b) {
        int res = 0;
        switch (op) {
        case '+':
            res = add(a, b); // Adder 클래스의 add() 함수 호출
            break;
        case '-':
            res = minus(a, b); // Subtractor 클래스의 minus() 함수 호출
            break;
        }
        return res;
    }
};

int main() {
    Calculator handCalculator;
    cout << "2 + 4 = " << handCalculator.calc('+', 2, 4) << endl; // 덧셈 결과 출력
    cout << "100 - 8 = " << handCalculator.calc('-', 100, 8) << endl; // 뺄셈 결과 출력

    return 0;
}

