#pragma once
#include "DxLib.h"
#include "GameManager.h"

//�E�Q�[���S�̂̊Ǘ��p�C���X�^���X
extern GameManager gameManager;

//�E��ʃT�C�Y�Ȃ�
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

//�E��{�̐F
extern const int COLOR_WHITE;
extern const int COLOR_BLACK;
extern const int COLOR_RED;
extern const int COLOR_GREEN;
extern const int COLOR_BLUE;
extern const int COLOR_YELLOW;
extern const int COLOR_PURPLE;
extern const int COLOR_CYAN;

//�E�O���[�o���֐�
std::array<int, 2> vector2dNormalize(std::array<int, 2>, int = 1);
std::array<int, 2> vector2dSub(std::array<int, 2>, std::array<int, 2>);
int roundInt(double);