#include <iostream>
using namespace std;

class Box { // Box 클래스 생성
    int x, y, z; // private 멤버 변수
public: // public 접근 지정자 
    Box(int x = 0, int y = 0, int z = 0) { // x, y, z를 매개변수로 받는 생성자
        this->x = x; // 매개변수 x를 멤버 변수 x에 저장
        this->y = y; // 매개변수 y를 멤버 변수 y에 저장
        this->z = z; // 매개변수 z를 멤버 변수 z에 저장
    };

    void show() {
        cout << x * y * z << "cm3" << endl;
    }

    Box operator+ (Box op2) { // 연산자 중복
        Box tmp; // 임시 객체 생성
        tmp.x = this->x + op2.x; // x 더하기
        tmp.y = this->y + op2.y; // y 더하기
        tmp.z = this->z + op2.z; // z 더하기
        return tmp; // 더한 결과 리턴
    }; // + 연산자 함수 선언
};

int main() {
    Box box1(6, 7, 8), box2(5, 7, 8), box3; // 객체 생성
    box3 = box1 + box2; // + 연산자 호출
    cout << "box1 부피 : ";
    box1.show(); // box1 부피 출력

    cout << "box2 부피 : ";
    box2.show(); // box2 부피 출력

    cout << "box3 부피 : ";
    box3.show(); // box3 부피 출력

    return 0;
}