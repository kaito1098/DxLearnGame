#include "GameManager.h"
#include "GameGlobal.h"

GameManager::GameManager() :
	frameCount(0)
{
}

//・メイン処理
void GameManager::run() {
	init();
	SetDrawScreen(DX_SCREEN_BACK);

	while (ProcessMessage() == 0) {
		ClearDrawScreen();

		update();
		draw();

		ScreenFlip();
	}
}

//・初期フレーム処理
void GameManager::init() {
	//TODO
}

//・毎フレーム更新処理
void GameManager::update() {
	//TODO
}

//・毎フレーム描画処理
void GameManager::draw() {
	//TODO
}