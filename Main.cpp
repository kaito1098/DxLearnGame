#include "GameGlobal.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	//初期設定・初期化
	ChangeWindowMode(true);
	SetOutApplicationLogValidFlag(false);
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);
	if (DxLib_Init() == -1)
	{
		return -1;	//DXライブラリの初期化失敗
	}

	gameManager.run();

	DxLib_End();
	return 0;
}