#include <easyx.h>
#include <stdlib.h>

#define MAX_WIDTH 1920
#define MAX_HEIGHT 1080

int main() {
	IMAGE* MdbrS = new IMAGE(MAX_WIDTH, MAX_HEIGHT);

	//���Ƶ���ͼ���ڣ�������
	initgraph(MAX_WIDTH, MAX_HEIGHT);
	putimage(0, 0, MdbrS);
	system("pause");
	return 0;
}