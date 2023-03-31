#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int coffee;
    int water;
    int sugar;

public:
    CoffeeMachine(int c, int w, int s) {
        coffee = c;
        water = w;
        sugar = s;
    }

    void drinkEspresso() {
        // 원료가 부족한 경우 에러 메시지 출력 후 함수 종료
        if (coffee < 1 || water < 1) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        // 커피 원물과 물의 양 1씩 소모
        coffee -= 1;
        water -= 1;
        //cout << "에스프레소 드세요." << endl;
    }
    // 아메리카노 만드는 함수
    void drinkAmericano() {
        // 원료가 부족한 경우 에러 메시지 출력 후 함수 종료
        if (coffee < 1 || water < 2) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        // 커피 원물과 물의 양 1, 2씩 소모
        coffee -= 1;
        water -= 2;
        //cout << "아메리카노 드세요." << endl;
    }
    // 설탕커피 만드는 함수
    void dringkSugerCoffee() {
        if (coffee < 1 || water < 2 || sugar < 1) {
            cout << "원료가 부족합니다." << endl;
            return;
        }
        // 커피 원물, 물, 설탕의 양 1, 2, 1씩 소모
        coffee -= 1;
        water -= 2;
        sugar -= 1;
        //cout << "설탕커피 드세요." << endl;
    }
    // 재료를 채우는 함수
    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
        //cout << "재료를 채웠습니다." << endl;
    }
    // 현재 커피머신의 재료 상태를 출력하는 함수
    void show() {
        cout << "커피 머신 상태, 커피:" << coffee << ", 물:" << water << ", 설탕:" << sugar << endl;
    }
};
int main(){
   CoffeeMachine java(7, 12, 5);
   java.drinkEspresso();
   java.show();
   java.drinkAmericano();
   java.show();
   java.dringkSugerCoffee();
   java.show();
   java.fill();
   java.show();
    }