#pragma once
#include <SFML/Graphics.hpp>
#include "math.h"


class Mob
{
private:

   
    sf::Vector2f m_Position;  // ������� ����

    sf::Sprite m_Sprite;

    sf::Texture m_Texture;

    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_UpPressed;
    bool m_DownPressed;

    
    float m_Speed;// �������� ���� � �������� � �������

public:

    Mob();
    
    sf::Sprite getSprite();// ��� �������� ������� � ������� �������
 
    void moveLeft();// ��� �������� ����
    void moveRight();
    void moveUp();
    void moveDown();

    
    void stopLeft();// ����������� ��������
    void stopRight();
    void stopUp();
    void stopDown();

    void update(float elapsedTime);// ��� ������� ����� ���������� �� ������ ����

};

