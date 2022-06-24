#include "GameGlobal.h"
#include "GameManager.h"
#include "EnemyStalker.h"

GameManager::GameManager() :
	frameCount(0),
	player()
{
}

//�E���C������
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

//�E�����t���[������
void GameManager::init() {
	player.update();
	player.draw();
}

//�E���t���[���X�V����
void GameManager::update() {
	//�E���Ԋu�œG���o��������
	if (frameCount % 300 == 0) enemyManager.add(std::make_shared<EnemyStalker>(getRandomPosition()));
	player.update();
	enemyManager.update();
	playerBulletManager.update();
}

//�E���t���[���`�揈��
void GameManager::draw() {
	player.draw();
	enemyManager.draw();
	playerBulletManager.draw();
}

//�E�v���C���[�̎��͂����������_���ȍ��W��ԋp
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