#include "Mob.h"

Mob::Mob()
{
    // Вписываем в переменную скорость Боба
    m_Speed = 400;

    // Связываем текстуру и спрайт
    m_Texture.loadFromFile("img/MyHero.png");
    m_Sprite.setTexture(m_Texture);
    m_Sprite.setScale(4, 4);
    m_Sprite.setTextureRect(sf::IntRect(96, 32, 32, 32));

    // Устанавливаем начальную позицию Боба в пикселях
    m_Position.x = 300;
    m_Position.y = 300;

}

