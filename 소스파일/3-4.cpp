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
    // 0���� RAND_MAX������ ������ ������ ��ȯ�ϴ� �Լ�
    int next() {
        return rand();
    }
    // min�� max ���� ���� ������ ������ ��ȯ�ϴ� �Լ�
    int nextInRange() {
        return rand() % (max - min + 1) + min;
    }
    // min�� max ���� ������ ������ ¦���� ��ȯ�ϴ� �Լ�
    int nextEven() {
        int num = rand() % (max - min + 1) + min;
        if (num % 2 == 1) {
            num++;
        }
        return num;
    }
    // min�� max ���� ������ ������ Ȧ���� ��ȯ�ϴ� �Լ�
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
    cout << "-- 0���� 32767������ ���� ���� 15 ��--" << endl; // 0���� 32767������ ���� ���� 15�� ���
    for (int i = 0; i < 15; i++) {
        cout << r1.next() << " ";
    }
    cout << endl;

    SelectableRandom r2(20, 80);
    cout << "-- 20���� 80������ ���� ���� 23�� --" << endl; // 20���� 80������ ���� ���� 23�� ���
    for (int i = 0; i < 23; i++) {
        cout << r2.nextInRange() << " ";
    }
    cout << endl;

    return 0;
}
