#pragma once
#include <vector>
#include <memory>
#include "Player.h"
#include "EnemyManager.h"
#include "PlayerBulletManager.h"

class GameManager {
public:
	int frameCount;
	GameManager();
	Player player;
	EnemyManager enemyManager;
	PlayerBulletManager playerBulletManager;
	void run();
private:
	void init();
	void update();
	void draw();
};