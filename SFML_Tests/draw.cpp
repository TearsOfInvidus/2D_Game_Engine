#include "Engine.h"

void Engine::draw()
{
    // ������� ���������� ����
    window.clear(Color::White);

    // ������������ ���
    //window.draw(m_BackgroundSprite);
    window.draw(hero.getSprite());

    // ���������� ���, ��� ����������
    window.display();
}