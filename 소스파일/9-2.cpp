#include <iostream>
#include <fstream> // 파일 입출력 라이브러리
#include <vector> // 동적 배열 라이브러리
#include <algorithm> // 정렬 라이브러리
#include <ctime> // 시간 라이브러리
#include <cstdlib> // 난수 생성 라이브러리

using namespace std;

class NumberSorter { // 숫자 정렬 클래스
    vector<int> numbers;

public:
    void readFromFile(string filename) {
        ifstream file(filename);
        int n;
        while (file >> n) {
            numbers.push_back(n);
        }
    }

    void print() const { // 배열에 저장된 값을 출력하는 함수
        for (int n : numbers) {
            cout << n << " ";
        }
        cout << endl;
    }

    void sortAscending() { // 오름차순으로 정렬하는 함수
        sort(numbers.begin(), numbers.end());
    }

    void sortDescending() { // 내림차순으로 정렬하는 함수
        sort(numbers.begin(), numbers.end(), greater<int>());
    }

    void writeToFile(string filename) const { // 파일에 쓰는 함수
        ofstream file(filename);
        for (int n : numbers) {
            file << n << " ";
        }
    }
};

int main() {
    srand(time(nullptr)); // 현재 시각을 시드로 사용하여 난수 생성 엔진 초기화

    // 난수 생성하여 파일에 저장
    ofstream file("numbers.txt");
    for (int i = 0; i < 1000; i++) {
        file << rand() % 10000 << " ";
    }

    NumberSorter sorter;

    // 파일에서 정수 읽어들여 정렬 수행
    sorter.readFromFile("numbers.txt");

    cout << "정렬 전: ";
    sorter.print();

    char order;
    cout << "오름차순 정렬을 하려면 'A'를, 내림차순 정렬을 하려면 'D'를 입력하세요: ";
    cin >> order;

    if (order == 'A' || order == 'a') {
        sorter.sortAscending();
        cout << "오름차순 정렬 후: ";
    }
    else if (order == 'D' || order == 'd') {
        sorter.sortDescending();
        cout << "내림차순 정렬 후: ";
    }
    else {
        cout << "잘못된 입력입니다." << endl;
        return 0;
    }

    sorter.print();

    // 정렬된 결과를 파일에 저장
    sorter.writeToFile("sorted_numbers.txt");

    return 0;
}