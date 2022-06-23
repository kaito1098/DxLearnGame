#include "GameGlobal.h"
#include "EnemyStalker.h"

EnemyStalker::EnemyStalker(int _x, int _y) :
	EnemyBase(_x, _y, 20, COLOR_RED, 2, 30, 50)
{
}

void EnemyStalker::update() {
	Player& player = gameManager.player;
	auto moveVector = vector2dNormalize(vector2dSub(player.getPosition(), std::array<int, 2> {x, y}), speed);
	if (moveVector[0] != 0 || moveVector[1] != 0) {
		x += moveVector[0];
		y += moveVector[1];
	}
	EnemyBase::update();
}