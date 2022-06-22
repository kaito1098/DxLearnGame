#pragma once
#include "DxLib.h"
#include "GameManager.h"

//・ゲーム全体の管理用インスタンス
extern GameManager gameManager;

//・画面サイズなど
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;

//・基本の色
extern const int COLOR_WHITE;
extern const int COLOR_BLACK;
extern const int COLOR_RED;
extern const int COLOR_GREEN;
extern const int COLOR_BLUE;
extern const int COLOR_YELLOW;
extern const int COLOR_PURPLE;
extern const int COLOR_CYAN;

//・グローバル関数
std::array<int, 2> vector2dNormalize(std::array<int, 2>, int = 1);
std::array<int, 2> vector2dSub(std::array<int, 2>, std::array<int, 2>);
int roundInt(double);