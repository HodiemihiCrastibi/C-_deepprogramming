#include <iostream>
using namespace std;

class MP3 {
public:
    void play() {
        cout << "Playing music." << endl;
    }

    void stop() {
        cout << "Stopping music." << endl;
    }
};

class MobilePhone {
public:
    bool sendCall() {
        cout << "Making a phone call." << endl;
        return true;
    }

    bool receive() {
        cout << "Receiving a phone call." << endl;
        return true;
    }

    bool sendSMS() {
        cout << "Sending an SMS." << endl;
        return true;
    }

    bool receiveSMS() {
        cout << "Receiving an SMS." << endl;
        return true;
    }
};

class MusicPhone : public MP3, public MobilePhone { // 다중 상속 선언
public:
    void dial() {
        play(); // MP3 클래스의 play() 함수에 접근
        sendCall(); // MobilePhone 클래스의 sendCall() 함수에 접근
    }
};

int main() {
    MusicPhone hanPhone;
    hanPhone.play(); // MP3 클래스의 play() 함수에 접근
    hanPhone.sendSMS(); // MobilePhone 클래스의 sendSMS() 함수에 접근
    hanPhone.dial(); // MusicPhone 클래스의 dial() 함수 호출
    return 0;
}
