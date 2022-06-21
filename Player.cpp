#include "Player.h"
#include "KeyInput.h"

Player::Player() :
	color(COLOR_BLUE), radius(20), speed(5),
	x(SCREEN_WIDTH / 2), y(SCREEN_WIDTH / 8 * 7)
{
}

//�E�v���C���[�̈ʒu���X�V�i�L�[���͂ɂ�鐧��j
void Player::update() {
	if (KeyInput::KeyInputRight.onPressed()) x += speed;
	if (KeyInput::KeyInputLeft.onPressed()) x -= speed;
	if (KeyInput::KeyInputDown.onPressed()) y += speed;
	if (KeyInput::KeyInputUp.onPressed()) y -= speed;
	//�E�v���C���[����ʊO�ɏo�Ȃ��悤�ʒu�𒲐�
	if (x < radius) x = radius;
	if (x > SCREEN_WIDTH - radius) x = SCREEN_WIDTH - radius;
	if (y < radius) y = radius;
	if (y > SCREEN_HEIGHT - radius) y = SCREEN_HEIGHT - radius;
}

//�E�v���C���[�̕`�揈��
void Player::draw() {
	DrawCircle(x, y, radius, color);
}

//�E�v���C���[�̈ʒu�����擾����
std::array<int, 2> Player::getPosition() {
	std::array<int, 2> xPosition{ x, y };
	return xPosition;
}