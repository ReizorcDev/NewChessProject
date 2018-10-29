#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>//uniquement pour test, inutile sinon
#include <string>
#include "piece.h"
#include <vector>

class plateau
{
private:
	//--critères de formes--//
	int taille = 600; // taille totale (les marges sont en plus)
	int cote = taille / 8; //cote = taille des cases
	int marges = 10;//marges sur les cotes en %
	sf::RectangleShape Fond; //forme de fond du plateau

	//--critères de couleurs--//
	/*Je ne parviens pas à isoler les couleurs, si je les défini ici au lieu de les définir dans le
	plateau.ccp ça ne focntionne pas*/

	//--cases noires et blanches--//
	int couleurs[8][8] = {
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1},
	{1,0,1,0,1,0,1,0}
	};

public:
	//Init Texture
	sf::Texture roiNText;
	sf::Texture reineNText;
	sf::Texture fouNText;
	sf::Texture tourNText;
	sf::Texture cavNText;
	sf::Texture pionNText;
	sf::Texture roiBText;
	sf::Texture reineBText;
	sf::Texture fouBText;
	sf::Texture tourBText;
	sf::Texture cavBText;
	sf::Texture pionBText;
	void afficher(sf::RenderWindow &window);//afiche le plateau
	plateau();
	void initPieces(std::vector<piece> &vect);
	sf::Vector2f lincolToXY(char colonne, int ligne);
	int getTaille();
	void loadTextures();
	~plateau();
};

