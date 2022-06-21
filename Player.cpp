#include "Player.h"
#include "KeyInput.h"

Player::Player() :
	color(COLOR_BLUE), radius(20), speed(5),
	x(SCREEN_WIDTH / 2), y(SCREEN_WIDTH / 8 * 7)
{
}

//・プレイヤーの位置情報更新（キー入力による制御）
void Player::update() {
	if (KeyInput::KeyInputRight.onPressed()) x += speed;
	if (KeyInput::KeyInputLeft.onPressed()) x -= speed;
	if (KeyInput::KeyInputDown.onPressed()) y += speed;
	if (KeyInput::KeyInputUp.onPressed()) y -= speed;
	//・プレイヤーが画面外に出ないよう位置を調整
	if (x < radius) x = radius;
	if (x > SCREEN_WIDTH - radius) x = SCREEN_WIDTH - radius;
	if (y < radius) y = radius;
	if (y > SCREEN_HEIGHT - radius) y = SCREEN_HEIGHT - radius;
}

//・プレイヤーの描画処理
void Player::draw() {
	DrawCircle(x, y, radius, color);
}

//・プレイヤーの位置情報を取得する
std::array<int, 2> Player::getPosition() {
	std::array<int, 2> xPosition{ x, y };
	return xPosition;
}