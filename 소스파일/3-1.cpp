#include<iostream>
using namespace std;
class YoutubeSize {
private:
	int width; // ������ �ʺ�
	int height; // ������ ����
public:
	YoutubeSize(); // �⺻ ������
	YoutubeSize(int, int); // ������
	int GetWidth(); // ������ �ʺ� ��ȯ
	int GetHeight(); // ������ ���� ��ȯ
	void ResizeWindow(int, int); // ������ ũ�� ����
};
// �⺻ ������
YoutubeSize::YoutubeSize() : width(800), height(600) {}
// ������
YoutubeSize::YoutubeSize(int w, int h) : YoutubeSize() {
	ResizeWindow(w, h);
}
// ������ ���� ��ȯ
int YoutubeSize::GetHeight() {
	return height;
}
// ������ �ʺ� ��ȯ
int YoutubeSize::GetWidth() {
	return width;
}
// ������ ũ�� ����
void YoutubeSize::ResizeWindow(int w, int h) {
	if (w > 800) width = w;
	else width = 800;

	if (h > 600) height = h;
	else height = 600;
}

int main() {
	// YoutubeSize ��ü ����
	YoutubeSize mainWindow;

	mainWindow.ResizeWindow(854, 480);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(1920, 1080);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(3840, 2160);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;

	return 0;
}

