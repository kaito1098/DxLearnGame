#include "GameGlobal.h"

//・ゲーム全体の管理用
GameManager gameManager;

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

//・基本の色
const int COLOR_WHITE = 0xFFFFFF;
const int COLOR_BLACK = 0x000000;
const int COLOR_RED = 0xFF0000;
const int COLOR_GREEN = 0x00FF00;
const int COLOR_BLUE = 0x0000FF;
const int COLOR_YELLOW = 0xFFFF00;
const int COLOR_PURPLE = 0xFF00FF;
const int COLOR_CYAN = 0x00FFFF;

//・2次元ベクトルの正規化（normalを基準単位とし、規定値は 1）
std::array<int, 2> vector2dNormalize(std::array<int, 2> vector2d, int normal) {
	if (vector2d[0] == 0 && vector2d[1] == 0) {
		//・ゼロベクトルの場合はそのまま返す
		return vector2d;
	}
	double distance = sqrt(pow(vector2d[0], 2.0) + pow(vector2d[1], 2.0));
	return std::array<int, 2>{roundInt(vector2d[0] / distance * normal), roundInt(vector2d[1] / distance * normal)};
}

//・2次元ベクトルの引き算
std::array<int, 2> vector2dSub(std::array<int, 2> firstVector, std::array<int, 2> secondVector) {
	int x = firstVector[0] - secondVector[0], y = firstVector[1] - secondVector[1];
	return std::array<int, 2> {x, y};
}

//・四捨五入（double→int）
int roundInt(double num) {
	int isMinus = num <= 0;
	double absNum = abs(num);
	return (int)(absNum + 0.5) * (isMinus ? -1 : 1);
}

//・２つの円の衝突判定
bool checkHitCircles(std::array<int, 2> vector2d, int ar, int br) {
	int len = ar + br;
	return sqrt(pow(vector2d[0], 2) + pow(vector2d[1], 2)) <= len;
}