#include <iostream>

int main() {
    int count;
    std::cout << "������ �󸶳� �Է� �������?";
    std::cin >> count;

    int* arr = new int[count]; // ���� �Ҵ�

    for (int i = 0; i < count; i++) {
        std::cout << "���� �Է�: ";
        std::cin >> arr[i];
    }

    std::cout << "���� ���: ";
    for (int i = 0; i < count; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // ����

    return 0;
}
