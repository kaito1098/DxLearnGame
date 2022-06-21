#include "GameGlobal.h"
#include "GameManager.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	//�����ݒ�E������
	ChangeWindowMode(true);
	SetOutApplicationLogValidFlag(false);
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);
	if (DxLib_Init() == -1)
	{
		return -1;	//DX���C�u�����̏��������s
	}

	GameManager gameManager;
	gameManager.run();

	DxLib_End();
	return 0;
}