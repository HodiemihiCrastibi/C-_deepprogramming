#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "���ڿ� �Է� : ";
    cin >> input; // ����ڷκ��� ���ڿ� �Է¹ޱ�

    for (int i = 1; i <= input.length(); i++) { // ���ڿ��� ���̸�ŭ �ݺ�
        cout << input.substr(0, i) << endl; // 0��°���� i��°������ �κ� ���ڿ� ���
    }

    return 0;
}