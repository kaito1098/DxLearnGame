#pragma once
#include "EnemyBase.h"

class EnemyStalker : public EnemyBase {
public:
	EnemyStalker(int, int);
	void update() override;
};