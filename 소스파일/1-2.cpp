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
        cout << "정렬된 배열: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[10];

    // 10개의 데이터 입력 받기
    cout << "데이터 출력: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Sorter 객체를 이용하여 정렬하기
    Sorter sorter(arr, 10);
    sorter.sort();

    // 정렬된 배열 출력하기
    sorter.print();

    return 0;
}