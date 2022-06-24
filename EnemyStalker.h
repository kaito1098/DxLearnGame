#pragma once
#include "EnemyBase.h"

class EnemyStalker : public EnemyBase {
public:
	EnemyStalker(int, int);
	EnemyStalker(std::array<int, 2>);
	void update() override;
};