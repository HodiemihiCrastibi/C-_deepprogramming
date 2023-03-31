#include <iostream>
using namespace std;

class ChickenSeller {
private:
    int chickenPrice = 15000;   // 치킨 가격
    int dailyChicken = 60;      // 하루에 튀긴 치킨 수
    int remainingChicken = dailyChicken; // 남은 치킨 수
    int salesProfit = 5000;        // 판매 수익
public:
    void sellChicken(int order) {
        if (remainingChicken >= order) {
            remainingChicken -= order;
            int revenue = order * chickenPrice;
            salesProfit += revenue;
            cout << "치킨판매자 현황\n" << "남은 치킨 : " << remainingChicken << "\n판매 수익: " << revenue << "원\n" << endl;
        }
        else {
            int soldChicken = remainingChicken;
            remainingChicken = 0;
            int revenue = soldChicken * chickenPrice;
            salesProfit += revenue;
            cout << "치킨판매자 현황\n" << "남은 치킨 : " << remainingChicken << "\n판매 수익: " << revenue << "원\n" << endl;
        }
    }

    void showChickenStatus() {
        cout << "치킨구매자 현황\n" << "현재 잔액 : " << salesProfit << "원" << "\n치킨 개수 : " << dailyChicken - remainingChicken << endl;
    }
};

int main() {
    ChickenSeller seller;
    int order = 3;
    //cout << "몇 마리의 치킨을 주문하시겠습니까? ";
    //cin >> order;
    seller.sellChicken(order);
    seller.showChickenStatus();
    return 0;
}
