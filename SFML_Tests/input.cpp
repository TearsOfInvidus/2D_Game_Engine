#include "Engine.h"

void Engine::input()
{
    // Обрабатываем нажатие Escape
    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        m_Window.close();
    }

    // Обрабатываем нажатие клавиш движения
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Mob.moveLeft();
    }
    else
    {
        m_Mob.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Mob.moveRight();
    }
    else
    {
        m_Mob.stopRight();
    }

    if (Keyboard::isKeyPressed(Keyboard::W))
    {
        m_Mob.moveUp();
    }
    else
    {
        m_Mob.stopUp();
    }

    if (Keyboard::isKeyPressed(Keyboard::S))
    {
        m_Mob.moveDown();
    }
    else
    {
        m_Mob.stopDown();
    }

}