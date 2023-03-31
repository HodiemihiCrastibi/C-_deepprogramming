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
    std::cout << "�Է��� �ð� = " << hour << ":" << minute << ":" << second << std::endl;
}

int main() {
    // ����ڷκ��� �ð� ���� �Է¹ޱ�
    int h, m, s;
    std::cout << "�ð��� �Է����ּ���: " << std::endl;
    std::cout << "�� ��? ";
    std::cin >> h;
    std::cout << "�� ��? ";
    std::cin >> m;
    std::cout << "�� ��? ";
    std::cin >> s;
    // Time ��ü ���� �� �ð� ���
    Time time(h, m, s);
    time.printTime();
    // �ð��� �ʷ� ��ȯ ���
    int totalSeconds = time.toSeconds();
    std::cout << "�ð��� �ʷ� ��ȯ = " << totalSeconds << "��" << std::endl;

    return 0;
}
