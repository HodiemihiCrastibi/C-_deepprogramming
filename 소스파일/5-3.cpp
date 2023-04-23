#include <iostream>
#include <string>
using namespace std;

class WordCounter {
public:
    int count_words(const string& str) {
        int count = 0;
        bool in_word = false;
        bool is_duplicate = false;

        for (char c : str) {  // ���ڿ� str�� �� ���ھ� ��ȸ�Ѵ�.
            if (c == ' ' || c == '\t' || c == '\n') {  // ���� ���ڸ� ������
                if (in_word) {  // �ܾ ���� ���ڸ� ������ ������ �ܾ �ϼ��Ͽ����Ƿ�
                    count++;  // �ܾ� ������ 1 ������Ű��
                    in_word = false;  // �ܾ ���� ���ڸ� ��Ÿ���� ������ false�� �ʱ�ȭ�Ѵ�.
                }
            }
            else {  // ���� ���ڰ� �ƴ϶��
                in_word = true;  // �ܾ ���� �������� ��Ÿ���� ������ true�� �����Ѵ�.
            }
        }

        if (in_word) {  // ���ڿ��� ���� ���ڷ� ������ �ʰ� �ܾ�� ������ ���
            count++;  // ������ �ܾ �����Ͽ� �ܾ� ������ 1 ������Ų��.
        }

        return count;  // ���� �ܾ� ������ ��ȯ�Ѵ�.
    }

};

int main() {
    WordCounter wc;

    string s1 = "CPP";
    string s2 = "CPP Exercises CPP Exercises";
    string s3 = "Lorem Ipsum has been the industry's standard dummy text ever since the 1500s.";

    cout << "Original string: " << s1 << ", �ܾ� ����: " << wc.count_words(s1) << endl;
    cout << "Original string: " << s2 << ", �ܾ� ����: " << wc.count_words(s2) << endl;
    cout << "Original string: " << s3 << ", �ܾ� ����: " << wc.count_words(s3) << endl;

    return 0;
}