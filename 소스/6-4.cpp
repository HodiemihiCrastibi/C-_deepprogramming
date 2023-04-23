#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class RandomEncryption {
public:
    static void encrypt(string& message) {
        srand(time(NULL)); // 랜덤 시드 값 설정
        for (int i = 0; i < message.length(); i++) {
            if (message[i] >= 'A' && message[i] <= 'Z') {
                message[i] = 'A' + rand() % 26;
            }
            else if (message[i] >= 'a' && message[i] <= 'z') {
                message[i] = 'a' + rand() % 26;
            }
        }   // 그 외의 문자인 경우 암호화하지 않음
    }
};

int main() {
    string message = "Hello, Dongguk University. We have three elephants.";
    cout << "Original message: " << message << endl;

    RandomEncryption encryptor;
    encryptor.encrypt(message); // 문자열 암호화

    cout << "Encrypted message: " << message << endl;

    return 0;
}
