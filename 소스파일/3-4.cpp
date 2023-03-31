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
        this->min = min;
        this->max = max;
        srand((unsigned int)time(NULL));
    }
    // 0부터 RAND_MAX까지의 랜덤한 정수를 반환하는 함수
    int next() {
        return rand();
    }
    // min과 max 범위 내의 랜덤한 정수를 반환하는 함수
    int nextInRange() {
        return rand() % (max - min + 1) + min;
    }
    // min과 max 범위 내에서 랜덤한 짝수를 반환하는 함수
    int nextEven() {
        int num = rand() % (max - min + 1) + min;
        if (num % 2 == 1) {
            num++;
        }
        return num;
    }
    // min과 max 범위 내에서 랜덤한 홀수를 반환하는 함수
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
    cout << "-- 0에서 32767까지의 랜덤 정수 15 개--" << endl; // 0부터 32767까지의 랜덤 정수 15개 출력
    for (int i = 0; i < 15; i++) {
        cout << r1.next() << " ";
    }
    cout << endl;

    SelectableRandom r2(20, 80);
    cout << "-- 20에서 80까지의 랜덤 정수 23개 --" << endl; // 20부터 80까지의 랜덤 정수 23개 출력
    for (int i = 0; i < 23; i++) {
        cout << r2.nextInRange() << " ";
    }
    cout << endl;

    return 0;
}
