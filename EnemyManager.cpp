#include "EnemyManager.h"

void EnemyManager::add(std::shared_ptr<EnemyBase> enemyPtr) {
	enemies.emplace_back(enemyPtr);
}

void EnemyManager::update() {
	for (auto&& enemy : enemies) {
		enemy->update();
	}
	//E€‚ñ‚¾“G‚ğíœ
	auto removeItr = std::remove_if(enemies.begin(), enemies.end(), [](std::shared_ptr<EnemyBase> ptr) {
		return ptr->isDead;
		});
	enemies.erase(removeItr, enemies.end());
}

void EnemyManager::draw() {
	for (auto&& enemy : enemies) {
		enemy->draw();
	}
}