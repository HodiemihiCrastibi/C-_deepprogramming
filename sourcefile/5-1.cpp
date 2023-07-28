#include <iostream>
#include <string>
using namespace std;

class String {
public:
    void print_string(const string& s) const {
        cout << s << endl;
    }

    void print_reverse(const string& s) const {
        string reversed_s;
        int len = s.length();
        int i = len - 1;
        while (i >= 0) {
            reversed_s.push_back(s[i]);
            i--;
        }
        cout << reversed_s << endl;
    }
};

int main() {
    string my_string = "Lorem Ipsum has been the industry¡¯s standard dummy text ever since the 1500s.";
    String my_string_obj;
    my_string_obj.print_string(my_string);
    my_string_obj.print_reverse(my_string);
    return 0;
}