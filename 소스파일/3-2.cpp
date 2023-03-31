#include <iostream>
using namespace std;

class ChickenSeller {
private:
    int chickenPrice = 15000;   // ġŲ ����
    int dailyChicken = 60;      // �Ϸ翡 Ƣ�� ġŲ ��
    int remainingChicken = dailyChicken; // ���� ġŲ ��
    int salesProfit = 5000;        // �Ǹ� ����
public:
    void sellChicken(int order) {
        if (remainingChicken >= order) {
            remainingChicken -= order;
            int revenue = order * chickenPrice;
            salesProfit += revenue;
            cout << "ġŲ�Ǹ��� ��Ȳ\n" << "���� ġŲ : " << remainingChicken << "\n�Ǹ� ����: " << revenue << "��\n" << endl;
        }
        else {
            int soldChicken = remainingChicken;
            remainingChicken = 0;
            int revenue = soldChicken * chickenPrice;
            salesProfit += revenue;
            cout << "ġŲ�Ǹ��� ��Ȳ\n" << "���� ġŲ : " << remainingChicken << "\n�Ǹ� ����: " << revenue << "��\n" << endl;
        }
    }

    void showChickenStatus() {
        cout << "ġŲ������ ��Ȳ\n" << "���� �ܾ� : " << salesProfit << "��" << "\nġŲ ���� : " << dailyChicken - remainingChicken << endl;
    }
};

int main() {
    ChickenSeller seller;
    int order = 3;
    //cout << "�� ������ ġŲ�� �ֹ��Ͻðڽ��ϱ�? ";
    //cin >> order;
    seller.sellChicken(order);
    seller.showChickenStatus();
    return 0;
}
