#include <iostream>
using namespace std;

class BaseMemory {
protected:
    char* mem;
public:
    BaseMemory(int size) {
        mem = new char[size];
    }
    ~BaseMemory() {
        delete[] mem;
    }
    char* getMemory() {
        return mem;
    }
};

class ROM : public BaseMemory {
public:
    ROM(int size) : BaseMemory(size) {
        // ROM은 생성자에서 burn 작업을 수행하지 않음
        // 따라서 ROM 객체 생성 후에는 mem 배열에 값을 직접 할당해야 함
    }

    void write(int address, char data) {
        cout << "ROM은 쓰기 작업을 지원하지 않습니다." << endl;
    }

    char read(int address) {
        return getMemory()[address];
    }
};

class RAM : public BaseMemory {
public:
    RAM(int size) : BaseMemory(size) {}

    void write(int address, char data) {
        getMemory()[address] = data;
    }

    char read(int address) {
        return getMemory()[address];
    }
};

int main() {
    ROM rom(5);
    RAM ram(5);

    rom.write(0, 'D');  // "ROM은 쓰기 작업을 지원하지 않습니다." 출력
    for (int i = 0; i < 7; i++) {
        rom.getMemory()[i] = "Dongguk"[i];
        ram.write(i, rom.getMemory()[i]);
    }

    for (int i = 0; i < 7; i++) {
        cout << "RAM 데이터[" << i << "]: " << ram.read(i) << endl;
    }

    return 0;
}
