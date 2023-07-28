#include <iostream>
#include <string>
using namespace std;

// 프린터 클래스 선언
class Printer {
protected:
    string model;           // 모델
    string manufacturer;    // 제조사
    int printedCount;       // 인쇄된 페이지 수
    int availableCount;     // 사용 가능한 용지 수

public:
    // 생성자 선언
    Printer(const string& model, const string& manufacturer, int availableCount)
        : model(model), manufacturer(manufacturer), printedCount(0), availableCount(availableCount) {}

    // 순수 가상 함수 print() 선언
    virtual void print(int pages) = 0;

    // 기본 구현된 show() 함수 선언
    virtual void show() {
        cout << "모델: " << model << endl;
        cout << "제조사: " << manufacturer << endl;
        cout << "인쇄 매수: " << printedCount << endl;
        cout << "인쇄 종이 잔량: " << availableCount << "장" << endl;
    }
};

// 잉크젯 프린터 클래스 선언
class InkJetPrinter : public Printer {
private:
    int availableInk;   // 사용 가능한 잉크 수

public:
    // 생성자 선언
    InkJetPrinter(const string& model, const string& manufacturer, int availableCount, int availableInk)
        : Printer(model, manufacturer, availableCount), availableInk(availableInk) {}

    // print() 함수 오버라이드
    void print(int pages) override {
        if (availableCount >= pages && availableInk >= pages) {
            printedCount += pages;
            availableCount -= pages;
            availableInk -= pages;
            cout << "프린트하였습니다." << endl;
        }
        else {
            cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
        }
    }

    // show() 함수 오버라이드
    void show() override {
        Printer::show();
        cout << "남은 잉크: " << availableInk << endl;
    }
};

// 레이저 프린터 클래스 선언
class LaserPrinter : public Printer {
private:
    int availableToner;   // 사용 가능한 토너 수

public:
    // 생성자 선언
    LaserPrinter(const string& model, const string& manufacturer, int availableCount, int availableToner)
        : Printer(model, manufacturer, availableCount), availableToner(availableToner) {}

    // print() 함수 오버라이드
    void print(int pages) override {
        if (availableCount >= pages && availableToner >= pages) {
            printedCount += pages;
            availableCount -= pages;
            availableToner -= pages;
            cout << "프린트하였습니다." << endl;
        }
        else {
            cout << "용지가 부족하여 프린트 할 수 없습니다." << endl;
        }
    }

    // show() 함수 오버라이드
    void show() override {
        Printer::show();
        cout << "남은 토너: " << availableToner << endl;
    }
};

// 메인 함수
int main() {
    // 잉크젯 프린터와 레이저 프린터 객체 생성
    InkJetPrinter inkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter laserPrinter("SCX-6x45", "삼성전자", 3, 20);

    // 현재 작동중인 프린터 상태 출력
    cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 : ";
    inkJetPrinter.show();
    cout << "레이저 : ";
    laserPrinter.show();

    char continuePrinting = 'y';
    while (continuePrinting == 'y' || continuePrinting == 'Y') {
        int printerType, pages;
        cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>> ";
        cin >> printerType >> pages;

        if (printerType == 1) {
            inkJetPrinter.print(pages);
            cout << "잉크젯 : ";
            inkJetPrinter.show();
            cout << "레이저 : ";
            laserPrinter.show();
        }
        else if (printerType == 2) {
            laserPrinter.print(pages);
            cout << "잉크젯 : ";
            inkJetPrinter.show();
            cout << "레이저 : ";
            laserPrinter.show();
        }
        else {
            cout << "잘못된 프린터 타입입니다." << endl;
        }

        cout << "계속 프린트 하시겠습니까(Y/N)>> ";
        cin >> continuePrinting;
    }

    return 0;
}
