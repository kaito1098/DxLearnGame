#pragma once
#include <vector>
#include <memory>
#include "EnemyBase.h"

class EnemyManager {
public:
	std::vector<std::shared_ptr<EnemyBase>> enemies;
	void add(std::shared_ptr<EnemyBase>);
	void update();
	void draw();
};