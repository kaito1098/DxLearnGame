#include "GameManager.h"
#include "GameGlobal.h"

GameManager::GameManager() :
	frameCount(0),
	player()
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
	player.update();
	player.draw();
}

//・毎フレーム更新処理
void GameManager::update() {
	player.update();
}

//・毎フレーム描画処理
void GameManager::draw() {
	player.draw();
}