#pragma once
#include <array>

class Player {
public:
	Player();
	void update();
	void draw();
	std::array<int, 2> getPosition();
private:
	int x, y;
	const int color, radius, speed;
};