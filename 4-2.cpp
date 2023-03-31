#include <iostream>
#include <string>

using namespace std;

class BankClient {
private:
    string owner; // 예금주
    string accountNumber; // 계좌번호
    int balance; // 잔액

public:
    BankClient(string owner, string accountNumber, int balance) :
        owner(owner), accountNumber(accountNumber), balance(balance) {} // 예금주 계좌번호 잔액 생성자

    void deposit(int amount) {
        balance += amount;
    }

    void withdraw(int amount) { // 잔액보다 크면
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "잔액이 부족합니다." << endl;
        }
    }

    void displayInfo() {
        cout << "예금주 : " << owner << endl;
        cout << "계좌 번호 : " << accountNumber << endl;
        cout << "잔액 : " << balance << endl;
    }

    ~BankClient() { // 소멸자
        cout << "객체가 소멸되었습니다." << endl;
    }
};

int main() { // 예금주 계좌번호 잔액 출력
    BankClient client("Alice", "2022123456", 100000);
    client.displayInfo();

    client.deposit(32165);
    client.displayInfo();

    client.withdraw(10000);
    client.displayInfo();
    // 함수 호출
    return 0;
}