#pragma once

class InputUtility {
public:
	InputUtility(int);
	bool onPressed();
	bool onPressedOnce();
private:
	int keyCode;
	bool pressed;
};