#include <iostream>

int main() {
    int count;
    std::cout << "정수를 얼마나 입력 받을까요?";
    std::cin >> count;

    int* arr = new int[count]; // 동적 할당

    for (int i = 0; i < count; i++) {
        std::cout << "정수 입력: ";
        std::cin >> arr[i];
    }

    std::cout << "정수 출력: ";
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // 해제

    return 0;
}
