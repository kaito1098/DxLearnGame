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
	if (frameCount % 300 == 0) enemyManager.add(std::make_shared<EnemyStalker>(getRandomPosition()));
	player.update();
	enemyManager.update();
	playerBulletManager.update();
}

//・毎フレーム描画処理
void GameManager::draw() {
	player.draw();
	enemyManager.draw();
	playerBulletManager.draw();
}

//・プレイヤーの周囲を除くランダムな座標を返却
std::array<int, 2> GameManager::getRandomPosition() {
	const int margin = 100, distance = 200;
	int x = 0, y = 0;
	auto playerPosition = player.getPosition();
	while (x < margin || x >(SCREEN_WIDTH - margin) || abs(playerPosition[0] - x) < distance) {
		x = rand() % (SCREEN_WIDTH - margin * 2) + margin;
	}
	while (y < margin || y >(SCREEN_HEIGHT - margin) || abs(playerPosition[1] - y) < distance) {
		y = rand() % (SCREEN_HEIGHT - margin);
	}
	return std::array<int, 2> {x, y};
}