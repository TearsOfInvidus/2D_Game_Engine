#include "Mob.h"

// Делаем приватный спрайт доступным для функции draw()
sf::Sprite Mob::getSprite()
{
    return m_Sprite;
}

void Mob::moveLeft()
{
    m_LeftPressed = true;
}

void Mob::moveRight()
{
    m_RightPressed = true;
}

void Mob::moveUp()
{
    m_UpPressed = true;
}

void Mob::moveDown()
{
    m_DownPressed = true;
}

void Mob::stopLeft()
{
    m_LeftPressed = false;
}

void Mob::stopRight()
{
    m_RightPressed = false;
}

void Mob::stopUp()
{
    m_UpPressed = false;
}

void Mob::stopDown()
{
    m_DownPressed = false;
}

// Двигаем Боба на основании пользовательского ввода в этом кадре,
// прошедшего времени и скорости
void Mob::update(float elapsedTime)
{
    if (m_RightPressed)
    {
        if (m_UpPressed)
        {
            m_Position.x += (m_Speed*cos(45)) * elapsedTime;
        }
        else if (m_DownPressed)
        {
            m_Position.x += (m_Speed * cos(45)) * elapsedTime;
        }
        else
        {
            m_Position.x += m_Speed * elapsedTime;
        }
    }

    if (m_LeftPressed)
    {
        if (m_UpPressed)
        {
            m_Position.x -= (m_Speed * cos(45)) * elapsedTime;
        }
        else if (m_DownPressed)
        {
            m_Position.x -= (m_Speed * cos(45)) * elapsedTime;
        }
        else
        {
            m_Position.x -= m_Speed * elapsedTime;
        }   
    }

    if (m_UpPressed)
    {
        m_Position.y -= m_Speed * elapsedTime;
    }

    if (m_DownPressed)
    {
        m_Position.y += m_Speed * elapsedTime;
    }

    // Теперь сдвигаем спрайт на новую позицию
    m_Sprite.setPosition(m_Position);

}