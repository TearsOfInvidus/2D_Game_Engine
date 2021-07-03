#include "Engine.h"

Engine::Engine()
{

    hero.sprite.setScale(3, 3);
    // �������� ���������� ������, ������� ���� SFML � View
    Vector2f resolution;

    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    window.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine");

    // ��������� ��� � ��������
    // ����������� ����������� ��� ��� ������ ������ � ���������
    //m_BackgroundTexture.loadFromFile("background.jpg");

    // ��������� ������ � ��������
    //m_BackgroundSprite.setTexture(m_BackgroundTexture);

}

void Engine::start()
{
    // ������ �������
    Clock clock;

    while (window.isOpen())
    {
        // ������������� ������ � ���������� ���������� ����� � dt
        Time dt = clock.restart();

        float dtAsMicroseconds = dt.asMicroseconds()/5000;

        input(dtAsMicroseconds);
        update(dtAsMicroseconds);
        draw();
    }
}
