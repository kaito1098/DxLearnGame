#pragma once
#include <vector>
#include <memory>
#include "PlayerBullet.h"

class PlayerBulletManager {
public:
	std::vector<std::shared_ptr<PlayerBullet>> bullets;
	void add(std::shared_ptr<PlayerBullet>);
	void update();
	void draw();
};