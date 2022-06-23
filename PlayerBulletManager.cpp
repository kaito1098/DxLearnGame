#include "PlayerBulletManager.h"

void PlayerBulletManager::add(std::shared_ptr<PlayerBullet> bulletPtr) {
	bullets.emplace_back(bulletPtr);
}

void PlayerBulletManager::update() {
	for (auto&& bullet : bullets) {
		bullet->update();
	}
	//E€‚ñ‚¾’e‚ğíœ
	auto removeItr = std::remove_if(bullets.begin(), bullets.end(), [](std::shared_ptr<PlayerBullet>& ptr) {
		return ptr->isDead;
		});
	bullets.erase(removeItr, bullets.end());
}

void PlayerBulletManager::draw() {
	for (auto&& bullet : bullets) {
		bullet->draw();
	}
}