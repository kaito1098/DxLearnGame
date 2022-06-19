#include "GameManager.h"
#include "GameGlobal.h"

GameManager::GameManager() :
	frameCount(0)
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
	//TODO
}

//�E���t���[���X�V����
void GameManager::update() {
	//TODO
}

//�E���t���[���`�揈��
void GameManager::draw() {
	//TODO
}