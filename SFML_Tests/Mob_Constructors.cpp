#include "Mob.h"

Mob::Mob()
{
    // ��������� � ���������� �������� ����
    m_Speed = 400;

    // ��������� �������� � ������
    m_Texture.loadFromFile("img/MyHero.png");
    m_Sprite.setTexture(m_Texture);
    m_Sprite.setScale(4, 4);
    m_Sprite.setTextureRect(sf::IntRect(96, 32, 32, 32));

    // ������������� ��������� ������� ���� � ��������
    m_Position.x = 300;
    m_Position.y = 300;

}

