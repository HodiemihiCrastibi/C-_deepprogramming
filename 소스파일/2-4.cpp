#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "���ڿ��� �Է��ϼ���: ";
    getline(cin, str); // ������ ���Ե� ���ڿ� �Է� �ޱ�
    int len = str.length();

    cout << "�ݴ�� ��� :";
    // ���ڿ� ������
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    // cout << endl;

    return 0;
}