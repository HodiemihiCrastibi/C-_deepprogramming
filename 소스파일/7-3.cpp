#include<iostream>
using namespace std;

// Person 클래스 선언
class Person {
    int id; // 회원번호
    double weight; // 몸무게
    string name; // 이름
public:
    // 출력 함수
    void show() { cout << id << " " << weight << " " << name << endl; }
    // 디폴트 생성자
    Person() : id(1), weight(74.9), name("alice") {}
    // 매개변수가 2개인 생성자
    Person(int id, string name) : id(id), weight(74.9), name(name) {}
    // 매개변수가 3개인 생성자
    Person(int id, string name, double weight) : id(id), weight(weight), name(name) {}
};

// main 함수
int main() {
    // 객체 생성
    Person alice, bob(2, "Bob"), mallory(3, "Mallory", 99.5);
    // 객체 정보 출력
    alice.show();
    bob.show();
    mallory.show();
    return 0;
}

