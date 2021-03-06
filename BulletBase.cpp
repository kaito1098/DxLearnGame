#include "GameGlobal.h"
#include "BulletBase.h"

BulletBase::BulletBase(bool _ownedPlayer, int _x, int _y, int _damage, int _radius, int _color, int _speed) :
	ownedPlayer(_ownedPlayer), x(_x), y(_y), damage(_damage), radius(_radius), color(_color), speed(_speed),
	isDead(false)
{
}

void BulletBase::draw() {
	DrawCircle(x, y, radius, color);
}

//・弾の位置情報を取得する
std::array<int, 2> BulletBase::getPosition() {
	std::array<int, 2> xPosition{ x, y };
	return xPosition;
}

int BulletBase::getRadius() {
	return radius;
}