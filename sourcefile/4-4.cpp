#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string name; // 학생 이름
    string id; // 학생 학번
    string attendance; // 학생 출결 상태
public:
    // 기본 생성자
    Lecture() : name(""), id(""), attendance("결석") {}
    // 이름과 학번을 입력받아 객체 생성
    Lecture(string n, string i) : name(n), id(i), attendance("결석") {}
    // 객체의 출결 정보를 출력하는 함수
    void print() const {
        cout << name << " " << attendance << endl;
    }
    // 출결 상태를 설정하는 함수
    void setAttendance(string a) {
        attendance = a;
    }
    // 이름을 반환하는 함수
    string getName() const {
        return name;
    }
    // 학번을 반환하는 함수
    string getId() const {
        return id;
    }
    // 출결 상태를 반환하는 함수
    string getAttendance() const {
        return attendance;
    }
    // 소멸자
    ~Lecture() {}
};

int main() {
    // 동적 할당을 통해 객체 배열 생성
    Lecture* students = new Lecture[3]();

    // 학생들 출석 체크 시작 메시지 출력
    cout << "김철수 출석 체크를 시작합니다." << endl;
    cout << "이유리 출석 체크를 시작합니다." << endl;
    cout << "이훈이 출석 체크를 시작합니다." << endl << endl;

    // 학생의 정보를 입력받고 객체 배열에 저장
    for (int i = 0; i < 3; i++) {
        string name, id, attendance;
        cout << "------------------------------" << endl;
        cout << "이름 : ";
        getline(cin, name);
        cout << "학번 : ";
        getline(cin, id);
        cout << "출결 (출석, 지각, 결석) : ";
        getline(cin, attendance);
        students[i] = Lecture(name, id); // 객체 생성 및 초기화
        students[i].setAttendance(attendance); // 출결 상태 설정
    }
    // 출력
    cout << endl << "김철수 출석 체크가 완료되었습니다." << endl;
    cout << "이유리 출석 체크가 완료되었습니다." << endl;
    cout << "이훈이 출석 체크가 완료되었습니다." << endl << endl;
    // 동적메모리 해제
    delete[] students;
    return 0;
}
