#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

View view; //камера

View getplayercoordinateforview(float x, float y) //функция для считывания координат игрока
{ 

	view.setCenter(x + 75, y + 75); //следим за игроком, передавая его координаты камере. +100 - сместили камеру по иксу вправо. эксперементируйте
	return view;
}