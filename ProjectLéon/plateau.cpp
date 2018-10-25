#include "plateau.h"
#include <string>

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
	sf::Font font;//écriture pleine
	if (!font.loadFromFile("DIMITRI.ttf"))
	{
		std::cout << "Error loading font\n";
	}
	sf::Font font2;//écriture vide
	if (!font2.loadFromFile("DIMIS.ttf"))
	{
		std::cout << "Error loading font 2\n";
	}
	window.draw(Fond);//tracé du fond, donc en premier
	int max = std::sqrt(sizeof(couleurs) / sizeof(int)); //attention : limite aux plateaux carres
	sf::Text Text;//texte qui sera modifié à chaque fois
	Text.setFont(font);
	Text.setCharacterSize(40);
	for (int ligne = 0; ligne < max; ligne++) {
		for (int colonne = 0; colonne < max; colonne++) {
			sf::RectangleShape petit(sf::Vector2f(cote, cote));
			petit.setPosition(sf::Vector2f(cote*ligne + taille * marges/100, cote*colonne + taille * marges/100)); //marge de 10% sur chaque bord
			switch (couleurs[ligne][colonne]) {
			case 0 :
				petit.setFillColor(sf::Color::White);//couleur des cases blanches
				window.draw(petit);
				break;
			case 1:
				petit.setFillColor(sf::Color::Black);//couleur des cases noires
				window.draw(petit);
				break;
			default:
				std::cout << "Erreur d'affichage";
			}
		}
	}
	char nomColonne[8] = { 'A','B','C','D','E','F','G','H'};
	for (int colonne = 0; colonne < max; colonne++) {
		Text.setPosition(taille*marges / 100 + colonne * cote + cote/3,taille + taille*marges/100);
		Text.setString(nomColonne[colonne]);
		window.draw(Text);
	}
	char nomLigne[8] = { '8','7','6','5','4','3','2','1' };
	for (int ligne = 0; ligne < max; ligne++) {
		Text.setPosition(0.4*taille * marges / 100, taille*marges / 100 + ligne * cote + cote / 3);
		Text.setString(nomLigne[ligne]);
		window.draw(Text);
	}

	sf::Text Nom;
	Nom.setFont(font2);
	Nom.setFillColor(sf::Color::Black);
	Nom.setCharacterSize(48);
	Nom.setString("New Chess Project");
	Nom.setPosition(cote+taille *marges/100, 0);
	window.draw(Nom);
}

plateau::~plateau()
{}
