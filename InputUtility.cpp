#include "InputUtility.h"

InputUtility::InputUtility(int _keyCode) :
	keyCode(_keyCode), pressed(false)
{
}

//�E�L�[����������Ă��邩�H�i�`���^�����O���l�����Ȃ��j
bool InputUtility::onPressed() {
	return CheckHitKey(keyCode);
}

//�E�L�[����������Ă��邩�H�i�`���^�����O���l������j
bool InputUtility::onPressedOnce() {
	bool xCheck = CheckHitKey(keyCode);
	if (xCheck && !pressed) {
		pressed = true;
		return xCheck;
	}
	else if (!xCheck && pressed) {
		pressed = false;
	}
	return false;
}