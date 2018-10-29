#include "plateau.h"
#include <SFML/Graphics.hpp>
#include <iostream>//uniquement pour test, inutile sinon
#include <string>
#include "piece.h"
#include <vector>

plateau::plateau() {
	Fond.setSize( sf::Vector2f(taille*(1+0.02*marges), taille*(1+0.02*marges)) );
	sf::Color Gris (125, 125, 125);//couleur du fond
	Fond.setFillColor(Gris);
	/*
	roiB->setPosition(lincolToXY('d', 1 ));
	reineB->setPosition(lincolToXY('e', 1 ));
	fou1B->setPosition(lincolToXY('c', 1));
	fou2B->setPosition(lincolToXY('f', 1));
	tour1B->setPosition(lincolToXY('a', 1));
	tour2B->setPosition(lincolToXY('h', 1));
	cav1B->setPosition(lincolToXY('b', 1));
	cav2B->setPosition(lincolToXY('g', 1));
	pion1B->setPosition(lincolToXY('a', 2));
	pion2B->setPosition(lincolToXY('b', 2));
	pion3B->setPosition(lincolToXY('c', 2));
	pion4B->setPosition(lincolToXY('d', 2));
	pion5B->setPosition(lincolToXY('e', 2));
	pion6B->setPosition(lincolToXY('f', 2));
	pion7B->setPosition(lincolToXY('g', 2));
	pion8B->setPosition(lincolToXY('h', 2));
	roiN->setPosition(lincolToXY('d', 8));
	reineN->setPosition(lincolToXY('e', 8));
	fou1N->setPosition(lincolToXY('c', 8));
	fou2N->setPosition(lincolToXY('f', 8));
	tour1N->setPosition(lincolToXY('a', 8));
	tour2N->setPosition(lincolToXY('h', 8));
	cav1N->setPosition(lincolToXY('b', 8));
	cav2N->setPosition(lincolToXY('g', 8));
	pion1N->setPosition(lincolToXY('a', 7));
	pion2N->setPosition(lincolToXY('b', 7));
	pion3N->setPosition(lincolToXY('c', 7));
	pion4N->setPosition(lincolToXY('d', 7));
	pion5N->setPosition(lincolToXY('e', 7));
	pion6N->setPosition(lincolToXY('f', 7));
	pion7N->setPosition(lincolToXY('g', 7, this));
	pion8N->setPosition(lincolToXY('h', 7, this));
	*/
}

void plateau::initPieces(std::vector<piece> &vect) {
	vect[0].init(Fou, 1, fouBText, lincolToXY('c', 1));
	vect[1].init(Fou, 1, fouBText, lincolToXY('f', 1));
	vect[2].init(Cavalier, 1, cavBText, lincolToXY('b', 1));
	vect[3].init(Cavalier, 1, cavBText, lincolToXY('g', 1));
	vect[4].init(Tour, 1, tourBText, lincolToXY('a', 1));
	vect[5].init(Tour, 1, tourBText, lincolToXY('h', 1));
	vect[6].init(Pion, 1, pionBText, lincolToXY('a', 2));
	vect[7].init(Pion, 1, pionBText, lincolToXY('b', 2));
	vect[8].init(Pion, 1, pionBText, lincolToXY('c', 2));
	vect[9].init(Pion, 1, pionBText, lincolToXY('d', 2));
	vect[10].init(Pion, 1, pionBText, lincolToXY('e', 2));
	vect[11].init(Pion, 1, pionBText, lincolToXY('f', 2));
	vect[12].init(Pion, 1, pionBText, lincolToXY('g', 2));
	vect[13].init(Pion, 1, pionBText, lincolToXY('h', 2));
	vect[14].init(Reine, 1, reineBText, lincolToXY('e', 1));
}

sf::Vector2f plateau::lincolToXY(char colonne, int ligne) {
	int x_dest;
	int y_dest;
	int taille = this->taille;
	x_dest = taille * 0.1 + ((int)colonne - 97)*taille / 8;
	int inverse = 9 - ligne;
	y_dest = taille * 0.1 + (inverse - 1) * taille / 8;
	return sf::Vector2f(x_dest, y_dest);
}

int plateau::getTaille() {
	return taille;
}
void plateau::loadTextures() {
	roiNText.loadFromFile("images/chess_piece_2_black_king.png");
	reineNText.loadFromFile("images/chess_piece_2_black_queen.png");
	fouNText.loadFromFile("images/chess_piece_2_black_bishop.png");
	tourNText.loadFromFile("images/chess_piece_2_black_rook.png");
	cavNText.loadFromFile("images/chess_piece_2_black_knight.png");
	pionNText.loadFromFile("images/chess_piece_2_black_pawn.png");
	roiBText.loadFromFile("images/chess_piece_2_white_king.png");
	reineBText.loadFromFile("images/chess_piece_2_white_queen.png");
	fouBText.loadFromFile("images/chess_piece_2_white_bishop.png");
	tourBText.loadFromFile("images/chess_piece_2_white_rook.png");
	cavBText.loadFromFile("images/chess_piece_2_white_knight.png");
	pionBText.loadFromFile("images/chess_piece_2_white_pawn.png");
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
				petit.setFillColor(sf::Color::Red);//couleur des cases noires
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
