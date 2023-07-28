#include <iostream>
using namespace std;

class BaseArray {
protected:
    int* array;
    int len;
public:
    BaseArray(int capacity) {
        array = new int[capacity];
        len = 0;
    }
    ~BaseArray() {
        delete[] array;
    }

    void add(int item) {
        array[len++] = item;
    }

    int remove() {
        if (is_empty())
            return -1;
        int item = array[0];
        len--;
        for (int i = 0; i < len; i++)
            array[i] = array[i + 1];
        return item;
    }

    bool is_empty() {
        return len == 0;
    }

    int capacity() {
        return len;
    }

    int length() {
        return len;
    }
};

class MyQueue : public BaseArray {
public:
    MyQueue(int capacity) : BaseArray(capacity) {}

    void enqueue(int item) {
        add(item);
    }

    int dequeue() {
        return remove();
    }
};

int main() {
    MyQueue mQ(100);
    int n;
    cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "큐의 용량: " << mQ.capacity() << ", 큐의 크기: " << mQ.length() << endl;
    cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "큐의 현재 크기: " << mQ.length() << endl;

    return 0;
}