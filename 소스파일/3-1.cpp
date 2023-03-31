#include<iostream>
using namespace std;
class YoutubeSize {
private:
	int width; // 윈도우 너비
	int height; // 윈도우 높이
public:
	YoutubeSize(); // 기본 생성자
	YoutubeSize(int, int); // 생성자
	int GetWidth(); // 윈도우 너비 반환
	int GetHeight(); // 윈도우 높이 반환
	void ResizeWindow(int, int); // 윈도우 크기 조정
};
// 기본 생성자
YoutubeSize::YoutubeSize() : width(800), height(600) {}
// 생성자
YoutubeSize::YoutubeSize(int w, int h) : YoutubeSize() {
	ResizeWindow(w, h);
}
// 윈도우 높이 반환
int YoutubeSize::GetHeight() {
	return height;
}
// 윈도우 너비 반환
int YoutubeSize::GetWidth() {
	return width;
}
// 윈도우 크기 조정
void YoutubeSize::ResizeWindow(int w, int h) {
	if (w > 800) width = w;
	else width = 800;

	if (h > 600) height = h;
	else height = 600;
}

int main() {
	// YoutubeSize 객체 생성
	YoutubeSize mainWindow;

	mainWindow.ResizeWindow(854, 480);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(1920, 1080);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;
	mainWindow.ResizeWindow(3840, 2160);
	cout << mainWindow.GetWidth() << " x " << mainWindow.GetHeight() << endl;

	return 0;
}

