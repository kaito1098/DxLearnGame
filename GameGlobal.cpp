#include "GameGlobal.h"

//�E�Q�[���S�̂̊Ǘ��p
GameManager gameManager;

const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

//�E��{�̐F
const int COLOR_WHITE = 0xFFFFFF;
const int COLOR_BLACK = 0x000000;
const int COLOR_RED = 0xFF0000;
const int COLOR_GREEN = 0x00FF00;
const int COLOR_BLUE = 0x0000FF;
const int COLOR_YELLOW = 0xFFFF00;
const int COLOR_PURPLE = 0xFF00FF;
const int COLOR_CYAN = 0x00FFFF;

//�E2�����x�N�g���̐��K���inormal����P�ʂƂ��A�K��l�� 1�j
std::array<int, 2> vector2dNormalize(std::array<int, 2> vector2d, int normal) {
	if (vector2d[0] == 0 && vector2d[1] == 0) {
		//�E�[���x�N�g���̏ꍇ�͂��̂܂ܕԂ�
		return vector2d;
	}
	double distance = sqrt(pow(vector2d[0], 2.0) + pow(vector2d[1], 2.0));
	return std::array<int, 2>{roundInt(vector2d[0] / distance * normal), roundInt(vector2d[1] / distance * normal)};
}

//�E2�����x�N�g���̈����Z
std::array<int, 2> vector2dSub(std::array<int, 2> firstVector, std::array<int, 2> secondVector) {
	int x = firstVector[0] - secondVector[0], y = firstVector[1] - secondVector[1];
	return std::array<int, 2> {x, y};
}

//�E�l�̌ܓ��idouble��int�j
int roundInt(double num) {
	int isMinus = num <= 0;
	double absNum = abs(num);
	return (int)(absNum + 0.5) * (isMinus ? -1 : 1);
}

//�E�Q�̉~�̏Փ˔���
bool checkHitCircles(std::array<int, 2> vector2d, int ar, int br) {
	int len = ar + br;
	return sqrt(pow(vector2d[0], 2) + pow(vector2d[1], 2)) <= len;
}