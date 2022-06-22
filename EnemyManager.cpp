#include "EnemyManager.h"

void EnemyManager::add(std::shared_ptr<EnemyBase> enemyPtr) {
	enemies.emplace_back(enemyPtr);
}

void EnemyManager::update() {
	for (auto&& enemy : enemies) {
		enemy->update();
	}
}

void EnemyManager::draw() {
	for (auto&& enemy : enemies) {
		enemy->draw();
	}
}