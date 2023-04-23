#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Sphere {
private:
    double radius; // ���� ������
public:
    Sphere(double r) {
        radius = r;
        cout << "�� ��ü ����" << endl;
    }
    ~Sphere() {
        cout << "�� ��ü �Ҹ�" << endl;
    }
    double getVolume() { // ���� ���Ǹ� ����ϴ� �Լ�
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
};

int main() {
    Sphere* spheres[5];
    int countBig = 0, countSmall = 0;

    // ����ڷκ��� 5���� �� �������� �Է¹޾� ��ü�� �����ϰ� �����͸� �迭�� ����
    for (int i = 0; i < 5; i++) {
        double r;
        cout << "�������� �Է��ϼ���: ";
        cin >> r;
        spheres[i] = new Sphere(r);
    }

    // �迭�� ����� ���� ���Ǹ� ����Ͽ� ���ǰ� 765cm3���� ū ���� ���� ���� ������ ����
    for (int i = 0; i < 5; i++) {
        double volume = spheres[i]->getVolume();
        if (volume > 765) {
            countBig++;
        }
        else {
            countSmall++;
        }
    }
    // ���ǰ� ū ���� ���� ���� ������ ���
    cout << "���ǰ� 765cm3���� ū ���� ����: " << countBig << endl;
    cout << "���ǰ� 765cm3���� ���� ���� ����: " << countSmall << endl;
    // ���� �Ҵ��� �� ��ü �����͸� �޸𸮿��� ����
    for (int i = 0; i < 5; i++) {
        delete spheres[i];
    }
    return 0;
}