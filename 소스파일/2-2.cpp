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
} // ����ڷκ��� �� ���� �Է¹ޱ�

int main()
{
	int a, b;
	cout << "�� ���� �Է��ϼ��� :";
	cin >> a >> b;
	// �ִ������� �ּҰ���� ����ϰ� ��� ���
	cout << "�� ���� �ִ������� : " << gcd(a, b) << endl;
	cout << "�� ���� �ּҰ������ : " << (a * b) / gcd(a, b) << endl;
}