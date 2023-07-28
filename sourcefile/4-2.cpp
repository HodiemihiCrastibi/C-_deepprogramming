#include <iostream>
#include <string>

using namespace std;

class BankClient {
private:
    string owner; // ������
    string accountNumber; // ���¹�ȣ
    int balance; // �ܾ�

public:
    BankClient(string owner, string accountNumber, int balance) :
        owner(owner), accountNumber(accountNumber), balance(balance) {} // ������ ���¹�ȣ �ܾ� ������

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) { // �ܾ׺��� ũ��
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "�ܾ��� �����մϴ�." << endl;
        }
    }

    void displayInfo() {
        cout << "������ : " << owner << endl;
        cout << "���� ��ȣ : " << accountNumber << endl;
        cout << "�ܾ� : " << balance << endl;
    }

    ~BankClient() { // �Ҹ���
        cout << "��ü�� �Ҹ�Ǿ����ϴ�." << endl;
    }
};

int main() { // ������ ���¹�ȣ �ܾ� ���
    BankClient client("Alice", "2022123456", 100000);
    client.displayInfo();

    client.deposit(32165);
    client.displayInfo();

    client.withdraw(10000);
    client.displayInfo();
    // �Լ� ȣ��
    return 0;
}