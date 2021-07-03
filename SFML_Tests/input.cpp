#include "Engine.h"

void Engine::input(float dtAsMicroseconds)
{

    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        window.close();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        if (Keyboard::isKeyPressed(Keyboard::W))
        {

            hero.dir = 4;
            hero.speed = 3 * sin(45);
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }
        else if (Keyboard::isKeyPressed(Keyboard::S))
        {

            hero.dir = 5;
            hero.speed = 3 * sin(45);
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }
        else
        {
            hero.dir = 0;
            hero.speed = 3;
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            //hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 0, 32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }

    }

    else if (Keyboard::isKeyPressed(Keyboard::A))
    {
        if (Keyboard::isKeyPressed(Keyboard::W))
        {

            hero.dir = 6;
            hero.speed = 3 * sin(45);
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }
        else if (Keyboard::isKeyPressed(Keyboard::S))
        {

            hero.dir = 7;
            hero.speed = 3 * sin(45);
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }
        else
        {
            hero.dir = 1;
            hero.speed = 3 * dtAsMicroseconds;
            hero.frame += 0.05 * dtAsMicroseconds;

            if (hero.frame > 4)
            {
                hero.frame -= 4;
            }

            hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame + 32, 0, -32, 32));
            //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
        }
    }

    else if (Keyboard::isKeyPressed(Keyboard::W))
    {

        hero.dir = 3;
        hero.speed = 3 * dtAsMicroseconds;
        hero.frame += 0.05 * dtAsMicroseconds;

        if (hero.frame > 4)
        {
            hero.frame -= 4;
        }

        hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 64, 32, 32));
        //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());

    }

    else if (Keyboard::isKeyPressed(Keyboard::S))
    {
        hero.dir = 2;
        hero.speed = 3 * dtAsMicroseconds;
        hero.frame += 0.05 * dtAsMicroseconds;

        if (hero.frame > 4)
        {
            hero.frame -= 4;
        }

        hero.sprite.setTextureRect(IntRect(32 * (int)hero.frame, 32, 32, 32));
        //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());

    }

    else
    {
        hero.frame = 4;
        hero.sprite.setTextureRect(IntRect(96, 32, 32, 32));
        //getplayercoordinateforview(hero.getMobCoordinateX(), hero.getMobCoordinateY());
    }
}


//Должно быть так
//if (Keyboard::isKeyPressed(Keyboard::W))
//    {
//      hero.move_up();
//     }