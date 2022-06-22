#pragma once
#include <vector>
#include <memory>
#include "Player.h"
#include "EnemyManager.h"

class GameManager {
public:
	int frameCount;
	GameManager();
	Player player;
	EnemyManager enemyManager;
	void run();
private:
	void init();
	void update();
	void draw();
};