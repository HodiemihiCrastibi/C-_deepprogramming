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
        // ���ᰡ ������ ��� ���� �޽��� ��� �� �Լ� ����
        if (coffee < 1 || water < 1) {
            cout << "���ᰡ �����մϴ�." << endl;
            return;
        }
        // Ŀ�� ������ ���� �� 1�� �Ҹ�
        coffee -= 1;
        water -= 1;
        //cout << "���������� �弼��." << endl;
    }
    // �Ƹ޸�ī�� ����� �Լ�
    void drinkAmericano() {
        // ���ᰡ ������ ��� ���� �޽��� ��� �� �Լ� ����
        if (coffee < 1 || water < 2) {
            cout << "���ᰡ �����մϴ�." << endl;
            return;
        }
        // Ŀ�� ������ ���� �� 1, 2�� �Ҹ�
        coffee -= 1;
        water -= 2;
        //cout << "�Ƹ޸�ī�� �弼��." << endl;
    }
    // ����Ŀ�� ����� �Լ�
    void dringkSugerCoffee() {
        if (coffee < 1 || water < 2 || sugar < 1) {
            cout << "���ᰡ �����մϴ�." << endl;
            return;
        }
        // Ŀ�� ����, ��, ������ �� 1, 2, 1�� �Ҹ�
        coffee -= 1;
        water -= 2;
        sugar -= 1;
        //cout << "����Ŀ�� �弼��." << endl;
    }
    // ��Ḧ ä��� �Լ�
    void fill() {
        coffee = 10;
        water = 10;
        sugar = 10;
        //cout << "��Ḧ ä�����ϴ�." << endl;
    }
    // ���� Ŀ�Ǹӽ��� ��� ���¸� ����ϴ� �Լ�
    void show() {
        cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << ", ��:" << water << ", ����:" << sugar << endl;
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