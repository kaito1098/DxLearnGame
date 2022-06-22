#include "GameGlobal.h"
#include "GameManager.h"
#include "EnemyStalker.h"

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

		frameCount++;
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
	//・一定間隔で敵を出現させる
	if (frameCount % 300 == 0) enemyManager.add(std::make_shared<EnemyStalker>(100, 100));
	player.update();
	enemyManager.update();
}

//・毎フレーム描画処理
void GameManager::draw() {
	player.draw();
	enemyManager.draw();
}