#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
private:
    int min;
    int max;

public:
    SelectableRandom(int min, int max) {   
        // min과 max 값을 받아 생성자에서 초기화하고, srand()를 이용해 랜덤 시드를 설정합니다.
        this->min = min;
        this->max = max;
        srand((unsigned int)time(NULL));
    }
    // 0부터 RAND_MAX(32767) 사이의 랜덤한 값을 반환합니다.
    int next() {
        return rand();
    }
    // min부터 max 사이의 랜덤한 값을 반환합니다.
    int nextInRange() {
        return rand() % (max - min + 1) + min;
    }
    // min부터 max 사이의 랜덤한 짝수를 반환합니다.
    int nextEven() {
        int num = rand() % (max - min + 1) + min;
        if (num % 2 == 1) {
            num++;
        }
        return num;
    }
    // min부터 max 사이의 랜덤한 홀수를 반환합니다.
    int nextOdd() {
        int num = rand() % (max - min + 1) + min;
        if (num % 2 == 0) {
            num++;
        }
        return num;
    }
};

int main() {
    SelectableRandom r1(0, 32767);
    cout << "--0에서 32767까지의 짝수 랜덤 정수 17개-- \n";
    for (int i = 0; i < 17; i++) {
        cout << r1.nextEven() << " "; // 0~32767 사이의 짝수를 17번 발생시킵니다.
    }
    cout << endl;

    SelectableRandom r2(35, 150);
    cout << "\n--35에서 150까지의 홀수 랜덤 정수 6개-- \n";
    for (int i = 0; i < 6; i++) {
        cout << r2.nextOdd() << " ";  // 35~150 사이의 홀수를 23번 발생시킵니다.
    }
    cout << endl;

    return 0;
}


