#include <iostream>
using namespace std;

// 추상 게이트 클래스 선언
class AbstractGate {
protected:
	bool x, y;
public:
	// x와 y 값을 설정하는 메서드
	void set(bool x, bool y) { this->x = x; this->y = y; }
	// 순수 가상 함수로, 파생 클래스에서 구현될 연산을 정의합니다.
	virtual bool operation() = 0;
};

// AND 게이트 클래스 선언
class ANDGate : public AbstractGate {
public:
	// operation 함수를 오버라이드하여 AND 연산을 수행합니다.
	bool operation() {
		return x && y;
	}
};

// OR 게이트 클래스 선언
class ORGate : public AbstractGate {
public:
	// operation 함수를 오버라이드하여 OR 연산을 수행합니다.
	bool operation() {
		return x || y;
	}
};

// XOR 게이트 클래스 선언
class XORGate : public AbstractGate {
public:
	// operation 함수를 오버라이드하여 XOR 연산을 수행합니다.
	bool operation() {
		return x ^ y;
	}
};

int main() {
	// AND, OR, XOR 게이트 객체 생성
	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	// x = true, y = false로 설정
	andGate.set(true, false);
	orGate.set(true, false);
	xorGate.set(true, false);

	// 출력 결과를 논리값으로 설정
	cout.setf(ios::boolalpha);

	// 각 게이트의 연산 결과를 출력
	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << xorGate.operation() << endl;

	return 0;
}
