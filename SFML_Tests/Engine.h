#pragma once
#include <SFML/Graphics.hpp>
#include "Mob.h"
#include "view.h"

using namespace sf;

class Engine
{
private:

	RenderWindow window; //основное окно
	Sprite m_BackgroundSprite; //Спрайт окна
	Texture m_BackgroundTexture; //Текстура окна
	Mob hero;

	void input(float dtAsMicroseconds);
	void update(float dtAsMicroseconds);
	void draw();

public:

	Engine();

	void start();

};

