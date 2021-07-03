#pragma once
#include <SFML/Graphics.hpp>
#include "math.h"


class Mob
{
private:

   
    sf::Vector2f m_Position;  // Позиция Боба

    sf::Sprite m_Sprite;

    sf::Texture m_Texture;

    bool m_LeftPressed;
    bool m_RightPressed;
    bool m_UpPressed;
    bool m_DownPressed;

    
    float m_Speed;// Скорость Боба в пикселях в секунду

public:

    Mob();
    
    sf::Sprite getSprite();// Для отправки спрайта в главную функцию
 
    void moveLeft();// Для движения Боба
    void moveRight();
    void moveUp();
    void moveDown();

    
    void stopLeft();// Прекращение движения
    void stopRight();
    void stopUp();
    void stopDown();

    void update(float elapsedTime);// Эта функция будет вызываться на каждый кадр

};

