#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    void convert_case(string& s) { // 대소문자를 변환하여 출력하는 함수
        cout << "원본 문자열: " << s << ", 대소문자 변경-> ";
        int len = s.length();
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) { // 대문자인 경우 소문자로 변환
                s[i] = tolower(s[i]);
            }
            else if (islower(s[i])) { // 소문자인 경우 대문자로 변환
                s[i] = toupper(s[i]);
            }
        }
        cout << s << endl; // 변환된 문자열 출력
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