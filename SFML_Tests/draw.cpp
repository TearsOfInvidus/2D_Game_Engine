#include "Engine.h"

void Engine::draw()
{
    // ������� ���������� ����
    m_Window.clear(Color::Color(128, 109, 91));

    // ������������ ���
    //m_Window.draw(m_BackgroundSprite);
    // � ����
    m_Window.draw(m_Mob.getSprite());

    // ���������� ���, ��� ����������
    m_Window.display();
}