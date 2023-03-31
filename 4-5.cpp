#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title; // ����
    int price; // ����
public:
    // �⺻ ������
    void setTitle(string t) {
        title = t;
    }
    void setPrice(int p) {
        price = p;
    }
    string getTitle() {
        return title;
    }
    int getPrice() {
        return price;
    }
};
// set �Լ��� ����� ������ ��ȯ�ϴ� �Լ�
int main() {
    const int num_books = 3;
    Book* books[num_books];
    // �� ģ���� ������ 3�� �Ҵ��ϰ� ��ü ������ �迭�� ����
    int count = 1;
    while (count <= num_books) {
        cout << "å " << count << "�� ���� �� ���� �Է�" << endl;
        books[count - 1] = new Book;
        string title;
        int price;
        cout << "���� : ";
        cin >> title;
        books[count - 1]->setTitle(title);
        cout << "���� : ";
        cin >> price;
        books[count - 1]->setPrice(price);
        count++;
    }
    //���
    for (int i = 0; i < num_books; i++) {
        cout << "å\n" << "���� :" << books[i]->getTitle() << "\n���� :" << books[i]->getPrice() << "��" << endl;
        // �����޸� ����
        delete books[i];
    }

    return 0;
}
