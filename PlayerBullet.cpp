#include "GameGlobal.h"
#include "PlayerBullet.h"

PlayerBullet::PlayerBullet(int _x, int _y) :
	BulletBase(true, _x, _y, 10, 4, COLOR_WHITE, 10)
{
}

void PlayerBullet::update() {
	y -= speed;
	//・死活チェック
	if (checkHit() || y < -radius) {
		isDead = true;
	}
}

//・Enemyに弾がヒットしたら、そのEnemyにダメージを与える
bool PlayerBullet::checkHit() {
	for (auto&& enemy : gameManager.enemyManager.enemies) {
		if (checkHitCircles(vector2dSub(getPosition(), enemy->getPosition()), radius, enemy->getRadius())) {
			enemy->takeDamage(damage);
			return true;
		}
	}
	return false;
}