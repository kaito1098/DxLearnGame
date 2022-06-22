#include "GameGlobal.h"
#include "EnemyStalker.h"

EnemyStalker::EnemyStalker(int _x, int _y) :
	EnemyBase(_x, _y),
	color(COLOR_RED), radius(20), speed(2)
{
}

void EnemyStalker::update() {
	Player& player = gameManager.player;
	auto moveVector = vector2dNormalize(vector2dSub(player.getPosition(), std::array<int, 2> {x, y}), speed);
	if (moveVector[0] != 0 || moveVector[1] != 0) {
		x += moveVector[0];
		y += moveVector[1];
	}
}

void EnemyStalker::draw() {
	DrawCircle(x, y, radius, color);
}