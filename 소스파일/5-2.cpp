#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    void convert_case(string& s) { // ��ҹ��ڸ� ��ȯ�Ͽ� ����ϴ� �Լ�
        cout << "���� ���ڿ�: " << s << ", ��ҹ��� ����-> ";
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) { // �빮���� ��� �ҹ��ڷ� ��ȯ
                s[i] = tolower(s[i]);
            }
            else if (islower(s[i])) { // �ҹ����� ��� �빮�ڷ� ��ȯ
                s[i] = toupper(s[i]);
            }
        }
        cout << s << endl; // ��ȯ�� ���ڿ� ���
    }
};

int main() {
    string my_string1 = "Dongguk";
    MyString my_string_obj1;
    my_string_obj1.convert_case(my_string1);

    string my_string2 = "iaIlIoQpAHAL";
    MyString my_string_obj2;
    my_string_obj2.convert_case(my_string2);

    string my_string3 = "EngLiSh";
    MyString my_string_obj3;
    my_string_obj3.convert_case(my_string3);

    return 0;
}