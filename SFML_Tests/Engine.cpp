#include "Engine.h"

Engine::Engine()
{

    hero.sprite.setScale(3, 3);
    // Получаем разрешение экрана, создаем окно SFML и View
    Vector2f resolution;

    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    window.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine");

    // Загружаем фон в текстуру
    // Подготовьте изображение под ваш размер экрана в редакторе
    //m_BackgroundTexture.loadFromFile("background.jpg");

    // Связываем спрайт и текстуру
    //m_BackgroundSprite.setTexture(m_BackgroundTexture);

}

void Engine::start()
{
    // Расчет времени
    Clock clock;

    while (window.isOpen())
    {
        // Перезапускаем таймер и записываем отмеренное время в dt
        Time dt = clock.restart();

        float dtAsMicroseconds = dt.asMicroseconds()/5000;

        input(dtAsMicroseconds);
        update(dtAsMicroseconds);
        draw();
    }
}
