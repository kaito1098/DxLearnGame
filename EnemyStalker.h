#pragma once
#include "EnemyBase.h"

class EnemyStalker : public EnemyBase {
public:
	EnemyStalker(int, int);
	void update();
	void draw();
private:
	const int color, radius, speed;
};