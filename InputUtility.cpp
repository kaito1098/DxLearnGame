#include "InputUtility.h"

InputUtility::InputUtility(int _keyCode) :
	keyCode(_keyCode), pressed(false)
{
}

//・キーが押下されているか？（チャタリングを考慮しない）
bool InputUtility::onPressed() {
	return CheckHitKey(keyCode);
}

//・キーが押下されているか？（チャタリングを考慮する）
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