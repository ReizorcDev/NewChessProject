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
	//Ini pieces blanches
	//Init pieces noires
	/*
	piece *roiN = new piece(Roi, 0,roiNText);
	piece *reineN = new piece(Reine, 0,reineNText);
	piece *fou1N = new piece(Fou, 0,fouNText);
	piece *fou2N = new piece(Fou, 0,fouNText);
	piece *cav1N = new piece(Cavalier, 0,cavNText);
	piece *cav2N = new piece(Cavalier, 0,cavNText);
	piece *tour1N = new piece(Tour, 0,tourNText);
	piece *tour2N = new piece(Tour, 0,tourNText);
	piece *pion1N = new piece(Pion, 0,pionNText);
	piece *pion2N = new piece(Pion, 0, pionNText);
	piece *pion3N = new piece(Pion, 0, pionNText);
	piece *pion4N = new piece(Pion, 0, pionNText);
	piece *pion5N = new piece(Pion, 0, pionNText);
	piece *pion6N = new piece(Pion, 0, pionNText);
	piece *pion7N = new piece(Pion, 0, pionNText);
	piece *pion8N = new piece(Pion, 0, pionNText);
	*/
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
	sf::Vector2f lincolToXY(char colonne, int ligne);
	int getTaille();
	void loadTextures();
	~plateau();
};

