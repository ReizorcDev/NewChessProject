#include "plateau.h"


plateau::plateau() {
	Fond.setSize( sf::Vector2f(taille*(1+0.02*marges), taille*(1+0.02*marges)) );
	sf::Color Gris (125, 125, 125);//couleur du fond
	Fond.setFillColor(Gris);
}
int plateau::getTaille() {
	return taille;
}

void plateau::afficher(sf::RenderWindow &window)
{
	window.draw(Fond);//tracé du fond, donc en premier
	int max = std::sqrt(sizeof(couleurs) / sizeof(int)); //attention : limite aux plateaux carres
	for (int ligne = 0; ligne < max; ligne++) {
		for (int colonne = 0; colonne < max; colonne++) {
			sf::RectangleShape petit(sf::Vector2f(cote, cote));
			petit.setPosition(sf::Vector2f(cote*ligne + taille * 0.1, cote*colonne + taille * 0.1)); //marge de 10% sur chaque bord

			if (couleurs[ligne][colonne] == 1) {
				petit.setFillColor(sf::Color::Black);//couleur des cases noires
				window.draw(petit);
			}
			else if (couleurs[ligne][colonne] == 0) {
					petit.setFillColor(sf::Color::White);//couleur des cases blanches
					window.draw(petit);
			}
		}
	}
}
plateau::~plateau()
{}
