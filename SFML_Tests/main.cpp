#include <SFML/Graphics.hpp>
#include "Mob.h"
#include <time.h>
#include <iostream>
#include "math.h"
#include "view.h"

using namespace sf;


int main()
{
    ContextSettings settings;
    settings.antialiasingLevel = 10;
    RenderWindow window(VideoMode(1280, 720), "The Game!", sf::Style::Default, settings);
    window.setFramerateLimit(120);

    view.reset(sf::FloatRect(0, 0, 1280, 720));

    Mob hero("MyHero.png",100,100,32,32);
    hero.sprite.scale(4.0f, 4.0f);

    CircleShape circle(50.0f);
    circle.setFillColor(Color::Black);

    CircleShape herocir(5.0f);
    circle.setFillColor(Color::Black);

    Clock clock;
    
    while (window.isOpen())
    {
        
        float time = clock.restart().asMicroseconds() / 5000;
       
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close(); 
    
        }

        
        if (Keyboard::isKeyPressed(Keyboard::D))
        {
            if (Keyboard::isKeyPressed(Keyboard::W))
            {

                hero.dir = 4;
                hero.speed = 3 * sin(45);
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }
            else if (Keyboard::isKeyPressed(Keyboard::S))
            {

                hero.dir = 5;
                hero.speed = 3 * sin(45);
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }
            else
            {
                hero.dir = 0;
                hero.speed = 3;
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 0, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }

        }
        else if (Keyboard::isKeyPressed(Keyboard::A))
        {
            if (Keyboard::isKeyPressed(Keyboard::W))
            {

                hero.dir = 6;
                hero.speed = 3 * sin(45);
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }
            else if (Keyboard::isKeyPressed(Keyboard::S))
            {

                hero.dir = 7;
                hero.speed = 3 * sin(45);
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }
            else
            {
                hero.dir = 1;
                hero.speed = 3 * time;
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame + 32, 0, -32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
            }
        }
        else if (Keyboard::isKeyPressed(Keyboard::W))
        {

                hero.dir = 3;
                hero.speed = 3 * time;
                hero.frame += 0.05 * time;

                if (hero.frame > 4)
                {
                    hero.frame -= 4;
                }

                hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
                getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
           
        }
        else if (Keyboard::isKeyPressed(Keyboard::S))
        {
            hero.dir = 2;
            hero.speed = 3 * time;
            hero.frame += 0.05 * time;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
            getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());

        }
        else
        {
            hero.frame = 4;
            hero.sprite.setTextureRect(IntRect(96, 32, 32, 32));
            getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }

        hero.update(time);
        herocir.setPosition(hero.getMobCoordinateX()+100, hero.getMobCoordinateY());

        window.setView(view); 
        window.clear();
        window.clear(Color::Color(130, 150, 200)); 
        window.draw(circle);
        window.draw(herocir);
        window.draw(hero.sprite);
        window.display();
    }


    return 0;
}

