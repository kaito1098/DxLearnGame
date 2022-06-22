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
	if (frameCount % 300 == 0) enemyManager.add(std::make_shared<EnemyStalker>(100, 100));
	player.update();
	enemyManager.update();
}

//�E���t���[���`�揈��
void GameManager::draw() {
	player.draw();
	enemyManager.draw();
}