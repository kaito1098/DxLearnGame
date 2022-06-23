#pragma once
#include "BulletBase.h"

class PlayerBullet : public BulletBase {
public:
	PlayerBullet(int x, int y);
	void update();
private:
	bool checkHit();
};