#include <iostream>
#include <string>
using namespace std;

// Person 클래스 정의
class Person {
private:
    int id;
    double weight;
    string name;
public:
    // 생성자 중 디폴트 생성자 정의
    Person() : id(0), weight(0), name("") {}
    // 생성자 중 id와 name만 매개변수로 받는 생성자 정의
    Person(int id, string name) : id(id), weight(0), name(name) {}
    // 생성자 중 id, name, weight 모두 매개변수로 받는 생성자 정의
    Person(int id, string name, double weight) : id(id), weight(weight), name(name) {}
    // 정보를 출력하는 멤버 함수 show 정의
    void show() const {
        cout << id << " " << weight << " " << name << endl;
    }
};

int main() {
    int n;
    cout << "How many persons do you want to create? ";
    cin >> n;

    // n개의 Person 객체를 동적 할당
    Person* people = new Person[n];

    // n명의 사람 정보 입력 받기
    for (int i = 0; i < n; i++) {
        int id;
        string name;
        double weight;
        cout << "Enter ID, name, and weight of person " << i + 1 << ": ";
        cin >> id >> name >> weight;

        // weight가 0이면, 생성자 중 id와 name만 매개변수로 받는 생성자 호출
        if (weight == 0) {
            people[i] = Person(id, name);
        }
        // weight가 0이 아니면, 생성자 중 id, name, weight 모두 매개변수로 받는 생성자 호출
        else {
            people[i] = Person(id, name, weight);
        }
    }

    // 입력받은 n명의 사람 정보 출력하기
    for (int i = 0; i < n; i++) {
        people[i].show();
    }

    // 동적 할당한 Person 객체 배열 반환
    delete[] people;

    return 0;
}

