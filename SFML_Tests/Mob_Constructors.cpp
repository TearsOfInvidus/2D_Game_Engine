#include "Mob.h"

Mob::Mob()
{
	file = "MyHero.png";
	w = 32; h = 32;
	x = 100; y = 100;

	image.loadFromFile("img/" + file);
	texture.loadFromImage(image);
	sprite.setTexture(texture);

	sprite.setTextureRect(sf::IntRect(32 * 3, 0, w, h));
}

Mob::Mob(std::string F, float X, float Y, int W, int H)
{
	file = F;
	w = W; h = H;
	x = X; y = Y;

	image.loadFromFile("img/" + file);
	texture.loadFromImage(image);
	sprite.setTexture(texture);

	sprite.setTextureRect(sf::IntRect(32 * 3, 0, W, H));
}