#pragma once

class EnemyBase {
public:
	bool isDead;
	EnemyBase(int x, int y, int radius, int color, int speed, int hp, int score);
	virtual void update();
	void draw();
	void takeDamage(int damage);
	std::array<int, 2> getPosition();
	int getRadius();
protected:
	int x, y, radius, color, speed, hp, score;
};