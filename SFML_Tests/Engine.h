#pragma once
#include <SFML/Graphics.hpp>
#include "Mob.h";

using namespace sf;

class Engine
{
private:

    RenderWindow m_Window;

    // ��������� ������ � �������� ��� ����
    Sprite m_BackgroundSprite;
    Texture m_BackgroundTexture;

    // ��������� ����
    Mob m_Mob;

    void input();
    void update(float dtAsSeconds);
    void draw();

public:
    // ����������� ������
    Engine();

    // ������� ����� ������� ��� ��������� �������
    void start();

};

