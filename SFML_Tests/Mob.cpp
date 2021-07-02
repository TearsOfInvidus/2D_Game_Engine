#include "Mob.h"

Mob::Mob(std::string F, float X, float Y, int W, int H)
{
	file = F;
	w = W; h = H;
	x = X; y = Y;

	image.loadFromFile("img/" + file);
	texture.loadFromImage(image);
	sprite.setTexture(texture);

	sprite.setTextureRect(sf::IntRect(32*3, 0, W, H));
}

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