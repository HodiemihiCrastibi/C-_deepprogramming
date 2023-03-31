#include <iostream>
#include "4.1.h"

Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

int Time::toSeconds() const {
    int totalSeconds = 0;
    totalSeconds += hour * 3600;
    totalSeconds += minute * 60;
    totalSeconds += second;
    return totalSeconds;
}

void Time::printTime() const {
    std::cout << "입력한 시간 = " << hour << ":" << minute << ":" << second << std::endl;
}

int main() {
    // 사용자로부터 시간 정보 입력받기
    int h, m, s;
    std::cout << "시간을 입력해주세요: " << std::endl;
    std::cout << "몇 시? ";
    std::cin >> h;
    std::cout << "몇 분? ";
    std::cin >> m;
    std::cout << "몇 초? ";
    std::cin >> s;
    // Time 객체 생성 및 시간 출력
    Time time(h, m, s);
    time.printTime();
    // 시간을 초로 변환 출력
    int totalSeconds = time.toSeconds();
    std::cout << "시간을 초로 변환 = " << totalSeconds << "초" << std::endl;

    return 0;
}
