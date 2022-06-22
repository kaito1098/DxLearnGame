#pragma once
#include "GameGlobal.h"
#include "InputUtility.h"

//・入力を受け付けるキーを管理
namespace KeyInput {
	InputUtility KeyInputRight = InputUtility(KEY_INPUT_RIGHT);
	InputUtility KeyInputLeft = InputUtility(KEY_INPUT_LEFT);
	InputUtility KeyInputDown = InputUtility(KEY_INPUT_DOWN);
	InputUtility KeyInputUp = InputUtility(KEY_INPUT_UP);
	InputUtility KeyInputA = InputUtility(KEY_INPUT_A);
	InputUtility KeyInputS = InputUtility(KEY_INPUT_S);
	InputUtility KeyInputD = InputUtility(KEY_INPUT_D);
	InputUtility KeyInputZ = InputUtility(KEY_INPUT_Z);
}