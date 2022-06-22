#pragma once

class EnemyBase {
public:
	EnemyBase(int, int);
	virtual void update() = 0;
	virtual void draw() = 0;
protected:
	int x, y;
};