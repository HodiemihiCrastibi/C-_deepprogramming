#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

class Sphere {
private:
    double radius; // 구의 반지름
public:
    Sphere(double r) {
        radius = r;
        cout << "구 객체 생성" << endl;
    }
    ~Sphere() {
        cout << "구 객체 소멸" << endl;
    }
    double getVolume() { // 구의 부피를 계산하는 함수
        return 4.0 / 3.0 * M_PI * pow(radius, 3);
    }
};

int main() {
    Sphere* spheres[5];
    int countBig = 0, countSmall = 0;

    // 사용자로부터 5개의 구 반지름을 입력받아 객체를 생성하고 포인터를 배열에 저장
    for (int i = 0; i < 5; i++) {
        double r;
        cout << "반지름을 입력하세요: ";
        cin >> r;
        spheres[i] = new Sphere(r);
    }

    // 배열에 저장된 구의 부피를 계산하여 부피가 765cm3보다 큰 구와 작은 구의 개수를 구함
    for (int i = 0; i < 5; i++) {
        double volume = spheres[i]->getVolume();
        if (volume > 765) {
            countBig++;
        }
        else {
            countSmall++;
        }
    }
    // 부피가 큰 구와 작은 구의 개수를 출력
    cout << "부피가 765cm3보다 큰 구의 개수: " << countBig << endl;
    cout << "부피가 765cm3보다 작은 구의 개수: " << countSmall << endl;
    // 동적 할당한 구 객체 포인터를 메모리에서 해제
    for (int i = 0; i < 5; i++) {
        delete spheres[i];
    }
    return 0;
}