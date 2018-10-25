#include <SFML/Graphics.hpp>
#include <iostream>//uniquement pour test, inutile sinon

#pragma once

class plateau
{
private:
	//--crit�res de formes--//
	int taille = 600; // taille totale (les marges sont en plus)
	int cote = taille / 8; //cote = taille des cases
	int marges = 10;//marges sur les cotes en %
	sf::RectangleShape Fond; //forme de fond du plateau

	//--crit�res de couleurs--//
	/*Je ne parviens pas � isoler les couleurs, si je les d�fini ici au lieu de les d�finir dans le
	plateau.ccp �a ne focntionne pas*/

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
	void afficher(sf::RenderWindow &window);//afiche le plateau
	plateau();
	int getTaille();
	~plateau();
};

