#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int upperCount = 0, lowerCount = 0, digitCount = 0, length = 0;

    cout << "���ڿ� �Է� : ";
    getline(cin, str);  // ������ ���Ե� ���ڿ��� �Է¹ޱ� ���� getline �Լ� ���

    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i]))  // �빮���� ���
            upperCount++;
        else if (islower(str[i]))  // �ҹ����� ���
            lowerCount++;
        else if (isdigit(str[i]))  // ������ ���
            digitCount++;
    }
    length = str.length();  // ���ڿ� ���� ����

    cout << "���ĺ� �빮���� ����: " << upperCount << endl;
    cout << "���ĺ� �ҹ����� ����: " << lowerCount << endl;
    cout << "������ ���� : " << digitCount << endl;
    cout << "���ڿ� ����: " << length << endl;

    return 0;
}
