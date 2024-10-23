#include <easyx.h>
#include <stdlib.h>

#include "calc.h"

#define MAX_WIDTH 2560
#define MAX_HEIGHT 2560

#define MAX_R_NUM 0.6
#define MIN_R_NUM -2.0
#define MAX_I_NUM 1.3
#define MIN_I_NUM -1.3
#define MAX_ITER 1024.0

int main() {
	IMAGE* MdbrS = new IMAGE(MAX_WIDTH, MAX_HEIGHT);
	SetWorkingImage(MdbrS);

	for (int x = 0; x < MAX_WIDTH; x++) {
		for (int y = 0; y < MAX_HEIGHT; y++) {
			double r = MIN_R_NUM + (MAX_R_NUM - MIN_R_NUM) * x / MAX_WIDTH;
			double i = MAX_I_NUM - (MAX_I_NUM - MIN_I_NUM) * y / MAX_HEIGHT;
			int ite_time = inSet(r, i);
			putpixel(x, y, ((int(ite_time / MAX_ITER * 0xFFFFFF))));
		}
	}

	saveimage(L"debug.png", MdbrS);
	//绘制到绘图窗口，调试用
	initgraph(MAX_WIDTH, MAX_HEIGHT);
	putimage(0, 0, MdbrS);
	system("pause");
	return 0;
}