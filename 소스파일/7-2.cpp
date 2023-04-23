#include <iostream>
using namespace std;

class measure { // class 선언
private: // private 접급지정자
    int radius; // 반지름
    int width; // 가로길이
    int height; // 세로 길이, 높이
public: // public 접근지정자
    measure(); // 기본생성자
    measure(int radius); // 원 면적
    measure(int width, int height); // 직사각형, 정사각형
    measure(double width, int height); // 삼각형
    measure(int radius, double height); // 원뿔 부피
    measure(double radius); // 구 부피
    measure(double radius, double height); // 실린더 부피
};

measure::measure(int radius) { // 원의 면적을 구하는 생성자
    this->radius = radius; // 매개변수 값을 멤버 변수에 저장
    cout << "원의 면적은 " << 3.14 * (this->radius) * (this->radius) << endl; // 3.14*pi*반지름^2
}

measure::measure(int width, int height) { // 직사각형, 정사각형의 면적을 구하는 생성자
    this->width = width; // 매개변수 값을 멤버 변수에 저장
    this->height = height;
    cout << "사각형의 면적은 " << (this->width) * (this->height) << endl; // 가로길이*세로길이
}

measure::measure(double width, int height) { // 삼각형의 면적을 구하는 생성자
    this->width = width; // 매개변수 값을 멤버 변수에 저장
    this->height = height;
    cout << "삼각형의 면적은 " << (this->width) * (this->height) / 2 << endl; // 사각형 면적/2
}

measure::measure(int radius, double height) { // 원뿔의 부피를 구하는 생성자
    this->radius = radius; // 매개변수 값을 멤버 변수에 저장
    this->height = height;
    cout << "원뿔의 부피는 " << 0.33 * 3.14 * (this->radius) * (this->radius) * (this->height) << endl; // 1/3*pi*반지름^2*높이
}

measure::measure(double radius) { // 구의 부피를 구하는 생성자
    this->radius = radius; // 매개변수 값을 멤버 변수에 저장
    cout << "구의 부피는 " << 1.33 * 3.14 * (this->radius) * (this->radius) * (this->radius) << endl; // 4/3*pi*반지름^3
}

measure::measure(double radius, double height) { // 실린더의 부피를 구하는 생성자
    this->radius = radius; // 매개변수 값을 멤버 변수에 저장
    this->height = height;
    cout << "실린더의 부피는 " << 3.14 * (this->radius) * (this->radius) * (this->height) << endl; // pi*반지름^2*높이
}


int main() {
    int radius; // int형 radius
    double radius_d; // double형 radius
    int width; // int형 width
    double width_d; // double형 width
    int height; // int형 height
    double height_d; // double형 height

    cout << "면적 및 부피 계산기" << endl << endl;

    cout << "1. 원의 면적" << endl; // 보기 출력
    cout << "2. 직사각형의 면적" << endl;
    cout << "3. 삼각형의 면적" << endl;
    cout << "4. 정사각형의 면적" << endl;
    cout << "5. 원뿔 부피" << endl;
    cout << "6. 구 부피" << endl;
    cout << "7. 실린터 부피" << endl << endl;

    cout << "입력 : "; // 보기 숫자 입력
    int num;
    cin >> num;

    if (num == 1) { // 선택한 것이 1번이라면
        cout << "원의 반지름 입력 (int radius): ";
        cin >> radius;
        measure obj(radius); // int형 radius 전달, obj 객체 생성
    }
    else if (num == 2) { // 선택한 것이 2번이라면
        cout << "직사각형 밑변, 높이 입력 (int radius, int height): ";
        cin >> width >> height;
        measure obj(width, height); // int형 width, int형 height 전달, obj 객체 생성
    }
    else if (num == 3) { // 선택한 것이 3번이라면
        cout << "삼각형 밑변, 높이 입력 (double width, int height): ";
        cin >> width_d >> height;
        measure obj(width_d, height); // double형 width, int형 height 전달, obj 객체 생성
    }
    else if (num == 4) { // 선택한 것이 4번이라면
        cout << "정사각형 한 변의 입력 (int width): ";
        cin >> width;
        measure obj(width, width); // int형 width 전달, obj 객체 생성
    }
    else if (num == 5) { // 선택한 것이 5번이라면
        cout << "원뿔의 밑반지름, 높이 입력 (int radius, double height): ";
        cin >> radius >> height_d;
        measure obj(radius, height_d); // int형 radius, double형 height 전달, obj 객체 생성
    }
    else if (num == 6) { // 선택한 것이 6번이라면
        cout << "구의 반지름 입력 (double radius): ";
        cin >> radius_d;
        measure obj(radius_d); // double형 radius 전달, obj 객체 생성
    }
    else if (num == 7) { // 선택한 것이 7번이라면
        cout << "실린더 밑반지름, 높이 입력 (double radius, double height): ";
        cin >> radius_d >> height_d;
        measure obj(radius_d, height_d); // double형 radius, double형 height 전달, obj 객체 생성
    }
    else { // 선택한 것이 1-7 사이의 숫자가 아니라면
        cout << "1-7 사이의 숫자를 입력해주세요. 프로그램을 종료합니다."; // 에러 메세지 출력
    }
}