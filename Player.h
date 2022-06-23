#pragma once
#include <array>

class Player {
public:
	Player();
	void update();
	void draw();
	void shot();
	std::array<int, 2> getPosition();
	int getRadius();
private:
	int x, y;
	const int color, radius, speed;
};