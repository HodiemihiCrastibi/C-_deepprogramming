#include <iostream>
#include <string>
using namespace std;

class WordCounter {
public:
    int count_words(const string& str) {
        int count = 0;
        bool in_word = false;
        bool is_duplicate = false;

        for (char c : str) {  // 문자열 str을 한 글자씩 순회한다.
            if (c == ' ' || c == '\t' || c == '\n') {  // 공백 문자를 만나면
                if (in_word) {  // 단어에 속한 문자를 만나기 전까지 단어를 완성하였으므로
                    count++;  // 단어 개수를 1 증가시키고
                    in_word = false;  // 단어에 속한 문자를 나타내는 변수를 false로 초기화한다.
                }
            }
            else {  // 공백 문자가 아니라면
                in_word = true;  // 단어에 속한 문자임을 나타내는 변수를 true로 설정한다.
            }
        }

        if (in_word) {  // 문자열이 공백 문자로 끝나지 않고 단어로 끝나는 경우
            count++;  // 마지막 단어를 포함하여 단어 개수를 1 증가시킨다.
        }

        return count;  // 계산된 단어 개수를 반환한다.
    }

};

int main() {
    WordCounter wc;

    string s1 = "CPP";
    string s2 = "CPP Exercises CPP Exercises";
    string s3 = "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s.";

    cout << "Original string: " << s1 << ", 단어 개수: " << wc.count_words(s1) << endl;
    cout << "Original string: " << s2 << ", 단어 개수: " << wc.count_words(s2) << endl;
    cout << "Original string: " << s3 << ", 단어 개수: " << wc.count_words(s3) << endl;

    return 0;
}