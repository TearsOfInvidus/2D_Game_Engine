#pragma once
#include <SFML/Graphics.hpp>
#include "Mob.h"
#include "view.h"

using namespace sf;

class Engine
{
private:

	RenderWindow window; //�������� ����
	Sprite m_BackgroundSprite; //������ ����
	Texture m_BackgroundTexture; //�������� ����
	Mob hero;

	void input(float dtAsMicroseconds);
	void update(float dtAsMicroseconds);
	void draw();

public:

	Engine();

	void start();

};

