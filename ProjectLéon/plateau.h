#include <SFML/Graphics.hpp>
#include <iostream>

#pragma once

class plateau
{
private:
	int taille = 600;
	sf::RectangleShape grand;
	/*int couleurs[2][2] = {
		{1,0},{0,1}
	};*/
	int couleurs[8][8] = {
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1}
	};
public:
	void afficher(sf::RenderWindow &window);
	plateau();
	~plateau();
};

