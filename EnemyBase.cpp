#include "GameGlobal.h"
#include "EnemyBase.h"

EnemyBase::EnemyBase(int _x, int _y, int _radius, int _color, int _speed, int _hp, int _score) :
	x(_x), y(_y), radius(_radius), color(_color), speed(_speed), hp(_hp), score(_score),
	isDead(false)
{
}

void EnemyBase::update() {
	//�E�����`�F�b�N
	if (hp <= 0 || x <= -radius || x >= SCREEN_WIDTH + radius || y <= -radius || y >= SCREEN_HEIGHT + radius) {
		isDead = true;
	}
}

void EnemyBase::draw() {
	DrawCircle(x, y, radius, color);
}

void EnemyBase::takeDamage(int damage) {
	hp -= damage;
}

//�E�G�l�~�[�̈ʒu�����擾����
std::array<int, 2> EnemyBase::getPosition() {
	std::array<int, 2> xPosition{ x, y };
	return xPosition;
}

int EnemyBase::getRadius() {
	return radius;
}