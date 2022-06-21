#include "GameManager.h"
#include "GameGlobal.h"

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
	player.update();
}

//�E���t���[���`�揈��
void GameManager::draw() {
	player.draw();
}