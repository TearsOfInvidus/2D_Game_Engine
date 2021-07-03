#include "Engine.h"

void Engine::draw()
{
    // Стираем предыдущий кадр
    window.clear(Color::White);

    // Отрисовываем фон
    //window.draw(m_BackgroundSprite);
    window.draw(hero.getSprite());

    // Отображаем все, что нарисовали
    window.display();
}