#include <iostream>
using namespace std;

class Ship {
public:
    int speed;
    double distance;

    void BeforeReentry(int& spd, int dist) {
        spd = speed; // 인자로 전달된 sqd와 dist를 이용해 speed 와 distance 멤버 변수를 갱신
        distance = dist;
    }

    void AfterReentry(int& spd, int dist) {
        spd = SPEED_AFTER;  // 인자로 전달된 sqd와 dist를 이용하여 SPEED_AFTER 상수 값으로 spd를 대체하여 갱신하고 distance 값을 dist로 대체하여 갱신
        distance = dist;
    }

private:
    const int SPEED_BEFORE = 17000;
    const int SPEED_AFTER = 10000;
};

int main() {
    Ship myShip;
    int speed, distance;

    // BeforeReentry 멤버 함수
    myShip.speed = 17000; // 현재 속도 설정
    distance = 3000;  // 항구까지의 거리 설정
    myShip.BeforeReentry(speed, distance); // 항구 진입 전 속도와 거리 출력
    cout << "선박 속도(항구 진입 전): " << speed / myShip.distance << " 킬로미터(초)\n";

    // AfterReentry 멤버 함수
    distance = 3000;  // 항구까지의 거리 설정
    myShip.speed = 7000; // 현재 속도 설정
    myShip.AfterReentry(speed, distance); // 항구 진입 후 속도와 거리 출력
    cout << "선박 속도(항구 진입 후): " << myShip.speed / myShip.distance << " 킬로미터(초)\n";
    return 0;
}
