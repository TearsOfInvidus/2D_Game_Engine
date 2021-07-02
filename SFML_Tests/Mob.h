#pragma once
#include <SFML/Graphics.hpp>
#include <string>


class Mob
{
private:

	float x, y;

public:
	
	float dx, dy, speed = 0;
	int w, h;

	int dir = 0;
	float frame = 0;


	std::string file;
	sf::Image image;
	sf::Texture texture;
	sf::Sprite sprite;

	Mob(std::string f , float X, float Y, int W, int H);


	void update(float time);
	float getMobCoordinateX();
	float getMobCoordinateY();
};

