#include <iostream>
using namespace std;
int gcd(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
} // 사용자로부터 두 수를 입력받기

int main()
{
	int a, b;
	cout << "두 수를 입력하세요 :";
	cin >> a >> b;
	// 최대공약수와 최소공배수 계산하고 결과 출력
	cout << "두 수의 최대공약수는 : " << gcd(a, b) << endl;
	cout << "두 수의 최소공배수는 : " << (a * b) / gcd(a, b) << endl;
}