#include <iostream>
#include <algorithm>

using namespace std;

class Sorter {
private:
    int* arr;
    int size;
public:
    Sorter(int* arr, int size) {
        this->arr = arr;
        this->size = size;
    }
    void sort() {
        std::sort(arr, arr + size);
    }
    void print() {
        cout << "���ĵ� �迭: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[10];

    // 10���� ������ �Է� �ޱ�
    cout << "������ ���: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Sorter ��ü�� �̿��Ͽ� �����ϱ�
    Sorter sorter(arr, 10);
    sorter.sort();

    // ���ĵ� �迭 ����ϱ�
    sorter.print();

    return 0;
}