#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title; // 제목
    int price; // 가격
public:
    // 기본 생성자
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
// set 함수와 제목과 가격을 반환하는 함수
int main() {
    const int num_books = 3;
    Book* books[num_books];
    // 그 친구가 변수에 3을 할당하고 객체 포인터 배열에 저장
    int count = 1;
    while (count <= num_books) {
        cout << "책 " << count << "번 제목 및 가격 입력" << endl;
        books[count - 1] = new Book;
        string title;
        int price;
        cout << "제목 : ";
        cin >> title;
        books[count - 1]->setTitle(title);
        cout << "가격 : ";
        cin >> price;
        books[count - 1]->setPrice(price);
        count++;
    }
    //출력
    for (int i = 0; i < num_books; i++) {
        cout << "책\n" << "제목 :" << books[i]->getTitle() << "\n가격 :" << books[i]->getPrice() << "원" << endl;
        // 동적메모리 해제
        delete books[i];
    }

    return 0;
}
