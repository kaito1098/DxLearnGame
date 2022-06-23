#pragma once

class BulletBase {
public:
	bool isDead;
	BulletBase(bool ownedPlayer, int x, int y, int damage, int radius, int color, int speed);
	virtual void update() = 0;
	void draw();
	std::array<int, 2> getPosition();
	int getRadius();
protected:
	bool ownedPlayer;
	int x, y, damage, radius, color, speed;
};