#include "plateau.h"


plateau::plateau() {
	grand.setSize(sf::Vector2f(taille*1.2,taille*1.2));//20% de marges
	grand.setFillColor(sf::Color::Green);
}

void plateau::afficher(sf::RenderWindow &window)
{
	float cote = taille / 8.0;

	window.draw(grand);
	int max = std::sqrt(sizeof(couleurs) / sizeof(int)); //attention : limite aux plateaux carres
	for (int ligne = 0; ligne < max; ligne++) {
		for (int colonne = 0; colonne < max; colonne++) {
			sf::RectangleShape petit(sf::Vector2f(cote, cote));
			petit.setPosition(sf::Vector2f(cote*ligne + taille * 0.1, cote*colonne + taille * 0.1)); //marge de 10% sur chaque bord
			if (couleurs[ligne][colonne] == 1){
				petit.setFillColor(sf::Color::Blue);
				window.draw(petit);
			}
			else if (couleurs[ligne][colonne] == 0) {
				petit.setFillColor(sf::Color::Red);
				window.draw(petit);}
				}
	}
	
}

plateau::~plateau()
{
}
