#include <iostream>
#include <string>
using namespace std;

class Lecture {
private:
    string name; // �л� �̸�
    string id; // �л� �й�
    string attendance; // �л� ��� ����
public:
    // �⺻ ������
    Lecture() : name(""), id(""), attendance("�Ἦ") {}
    // �̸��� �й��� �Է¹޾� ��ü ����
    Lecture(string n, string i) : name(n), id(i), attendance("�Ἦ") {}
    // ��ü�� ��� ������ ����ϴ� �Լ�
    void print() const {
        cout << name << " " << attendance << endl;
    }
    // ��� ���¸� �����ϴ� �Լ�
    void setAttendance(string a) {
        attendance = a;
    }
    // �̸��� ��ȯ�ϴ� �Լ�
    string getName() const {
        return name;
    }
    // �й��� ��ȯ�ϴ� �Լ�
    string getId() const {
        return id;
    }
    // ��� ���¸� ��ȯ�ϴ� �Լ�
    string getAttendance() const {
        return attendance;
    }
    // �Ҹ���
    ~Lecture() {}
};

int main() {
    // ���� �Ҵ��� ���� ��ü �迭 ����
    Lecture* students = new Lecture[3]();

    // �л��� �⼮ üũ ���� �޽��� ���
    cout << "��ö�� �⼮ üũ�� �����մϴ�." << endl;
    cout << "������ �⼮ üũ�� �����մϴ�." << endl;
    cout << "������ �⼮ üũ�� �����մϴ�." << endl << endl;

    // �л��� ������ �Է¹ް� ��ü �迭�� ����
    for (int i = 0; i < 3; i++) {
        string name, id, attendance;
        cout << "------------------------------" << endl;
        cout << "�̸� : ";
        getline(cin, name);
        cout << "�й� : ";
        getline(cin, id);
        cout << "��� (�⼮, ����, �Ἦ) : ";
        getline(cin, attendance);
        students[i] = Lecture(name, id); // ��ü ���� �� �ʱ�ȭ
        students[i].setAttendance(attendance); // ��� ���� ����
    }
    // ���
    cout << endl << "��ö�� �⼮ üũ�� �Ϸ�Ǿ����ϴ�." << endl;
    cout << "������ �⼮ üũ�� �Ϸ�Ǿ����ϴ�." << endl;
    cout << "������ �⼮ üũ�� �Ϸ�Ǿ����ϴ�." << endl << endl;
    // �����޸� ����
    delete[] students;
    return 0;
}
