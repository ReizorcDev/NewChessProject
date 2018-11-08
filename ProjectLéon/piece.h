#pragma once
//#include "plateau.h"
#include <SFML/Graphics.hpp>
#include <iostream>

typedef enum classes{Roi,Reine,Fou,Tour,Cavalier,Pion};

class piece
{
private:
	int HP = 1;
	sf::Vector2f pos;
public:
	classes classe;
	sf::Sprite spr;
	int team; //0=>noir 1=>blanc
	void init(classes cl,int team,sf::Texture &text,sf::Vector2f position);
	piece();
	~piece();
	sf::Vector2f getPosition();
	void setPosition(sf::Vector2f);
};

