#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

class Factory {
	char* name; // 문자열을 저장하기 위한 동적 할당 메모리 주소를 저장할 포인터 변수 name
	int id; // 공장의 ID 번호를 저장할 정수형 변수 id
public:
	Factory(int id, const char* name); // 생성자1: id와 name을 매개변수로 받아 공장 객체를 생성
	Factory(const Factory& factory, const char* name); // 생성자2: 기존 공장 객체와 새로운 이름을 매개변수로 받아 객체를 생성
	~Factory(); // 소멸자: 동적 할당된 메모리 해제
	void changeName(const char* name); // 공장 이름을 변경하는 함수
	void show() { cout << id << ',' << name << endl; }; // 공장 정보를 출력하는 함수
};

Factory::Factory(int id, const char* name) {
	// 생성자1 구현: id와 name을 매개변수로 받아 공장 객체를 생성
	this->id = id; // id를 클래스 멤버 변수 id에 저장
	int len = strlen(name); // name의 길이를 구하여 len에 저장
	this->name = new char[len + 1]; // name을 저장하기 위한 동적 할당
	strcpy(this->name, name); // name을 클래스 멤버 변수 name에 복사
}

Factory::Factory(const Factory& factory, const char* name) {
	// 생성자2 구현: 기존 공장 객체와 새로운 이름을 매개변수로 받아 객체를 생성
	this->id = factory.id; // 기존 공장 객체의 id를 클래스 멤버 변수 id에 저장
	int len = strlen(name); // name의 길이를 구하여 len에 저장
	this->name = new char[len + 1]; // name을 저장하기 위한 동적 할당
	strcpy(this->name, name); // name을 클래스 멤버 변수 name에 복사
}

Factory::~Factory() {
	// 소멸자 구현: 동적 할당된 메모리 해제
	if (name) // name이 nullptr이 아닐 때 메모리 해제
		delete[] name;
}

void Factory::changeName(const char* name) {
	// 공장 이름을 변경하는 함수 구현
	if (strlen(name) > strlen(this->name)) // 새로운 이름의 길이가 기존 이름보다 길다면 변경하지 않음
		return;
	strcpy(this->name, name); // 새로운 이름으로 변경
}



int main() {
	cout << "메모리 할당" << endl;
	Factory father(0, "SAMSUNG 1대 생산!!"); //father 객체 생성
	cout << "메모리 소멸" << endl;

	cout << "메모리 할당" << endl;
	Factory daughter(father, "메모리 소멸");
	cout << "메모리 소멸" << endl;

	return 0;
}
