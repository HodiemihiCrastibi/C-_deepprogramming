#include <iostream>
#include <string>

using namespace std;

class Car {
    string id; // 차량 번호를 저장하는 문자 변수
    string name; // 차량 이름을 저장하는 문자 변수
    string display; // 표시를 저장하는 문자 변수
    static int numberOfCars; // 생성된 차량의 수를 저장하는 정적 변수

public:
    Car(string _id, string _name, string _display) :
        id(_id), name(_name), display(_display) { // 생성자를 이용해 멤버 변수들을 초기화하고, 생성된 차량의 수를 증가시킵니다.
        numberOfCars++;
    }

    void showInfo() const { // 차량 정보를 출력하는 함수
        cout << "차량 번호: " << id << endl;
        cout << "차량 이름: " << name << endl;
        cout << "표시(1 - 10): " << display << endl;
    }

    static int getNumberOfCars() { // 생성된 차량의 수를 반환하는 정적 멤버 함수
        return numberOfCars; 
    }
};

int Car::numberOfCars = 0; // 멤버 변수 초기화

int main() {
    string id, name, display;
    string id1, name1, display1;

    cout << "차량 번호 입력: ";
    getline(cin, id);

    cout << "차량 이름 입력: ";
    getline(cin, name);

    cout << "표시(1 - 10):";
    getline(cin, display);

    Car c1(id, name, display); // 입력 받은 정보로 Car 객체 생성

    cout << "차량 번호 입력: ";
    getline(cin, id1);

    cout << "차량 이름 입력: ";
    getline(cin, name1);

    cout << "표시(1 - 10):";
    getline(cin, display1);

    Car c2(id1, name1, display1);

    cout << endl << "생성된 차량 정보:" << endl;
    c1.showInfo();
    c2.showInfo();
    cout << endl;
    cout << "총 생성된 차량 수:" << Car::getNumberOfCars() << endl;

    return 0;
}