#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

View view; //������

View getplayercoordinateforview(float x, float y) //������� ��� ���������� ��������� ������
{ 

	view.setCenter(x + 75, y + 75); //������ �� �������, ��������� ��� ���������� ������. +100 - �������� ������ �� ���� ������. �����������������
	return view;
}