#include "Mob.h"

void Mob::update(float time)
{

	switch (dir)
	{
		case 0: dx = speed; dy = 0; break;
		case 1: dx = -speed; dy = 0; break;
		case 2: dx = 0; dy = speed; break;
		case 3: dx = 0; dy = -speed; break;
		case 4: dx = speed; dy = -speed; break;
		case 5: dx = speed; dy = speed; break;
		case 6: dx = -speed; dy = -speed; break;
		case 7: dx = -speed; dy = speed; break;
	}

	x += dx * time;
	y += dy * time;

	speed = 0;

	sprite.setPosition(x, y);

}

float Mob::getMobCoordinateX()
{
	return x;
}

float Mob::getMobCoordinateY()
{
	return y;
}

sf::Sprite Mob::getSprite()
{
	return sprite;
}