#pragma once

class GameManager {
public:
	int frameCount;
	GameManager();
	void run();
private:
	void init();
	void update();
	void draw();
};