#include "Engine.h"

void Engine::draw()
{
    // Стираем предыдущий кадр
    m_Window.clear(Color::Color(128, 109, 91));

    // Отрисовываем фон
    //m_Window.draw(m_BackgroundSprite);
    // И Боба
    m_Window.draw(m_Mob.getSprite());

    // Отображаем все, что нарисовали
    m_Window.display();
}