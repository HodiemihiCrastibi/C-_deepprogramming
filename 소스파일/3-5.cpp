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
        // min�� max ���� �޾� �����ڿ��� �ʱ�ȭ�ϰ�, srand()�� �̿��� ���� �õ带 �����մϴ�.
        this->min = min;
        this->max = max;
        srand((unsigned int)time(NULL));
    }
    // 0���� RAND_MAX(32767) ������ ������ ���� ��ȯ�մϴ�.
    int next() {
        return rand();
    }
    // min���� max ������ ������ ���� ��ȯ�մϴ�.
    int nextInRange() {
        return rand() % (max - min + 1) + min;
    }
    // min���� max ������ ������ ¦���� ��ȯ�մϴ�.
    int nextEven() {
        int num = rand() % (max - min + 1) + min;
        if (num % 2 == 1) {
            num++;
        }
        return num;
    }
    // min���� max ������ ������ Ȧ���� ��ȯ�մϴ�.
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
    cout << "--0���� 32767������ ¦�� ���� ���� 17��-- \n";
    for (int i = 0; i < 17; i++) {
        cout << r1.nextEven() << " "; // 0~32767 ������ ¦���� 17�� �߻���ŵ�ϴ�.
    }
    cout << endl;

    SelectableRandom r2(35, 150);
    cout << "\n--35���� 150������ Ȧ�� ���� ���� 6��-- \n";
    for (int i = 0; i < 6; i++) {
        cout << r2.nextOdd() << " ";  // 35~150 ������ Ȧ���� 23�� �߻���ŵ�ϴ�.
    }
    cout << endl;

    return 0;
}


