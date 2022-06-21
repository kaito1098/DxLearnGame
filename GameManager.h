#pragma once
#include "Player.h"

class GameManager {
public:
	int frameCount;
	GameManager();
	Player player;
	void run();
private:
	void init();
	void update();
	void draw();
};