#include "piece.h"
#include "plateau.h"


piece::piece()
{
}


piece::~piece()
{
}

void piece::move(char colonne, int ligne, plateau echiquier) {
	int x_dest;
	int y_dest;
	int taille = echiquier.getTaille();
	x_dest = taille*0.1+((int)colonne - 97)*taille/8;
	int inverse = 9 - ligne;
	y_dest = taille * 0.1 + inverse * taille / 8;
	this->Xpos = 2;
	std::cout << this->Xpos<<std::endl;
	std::cout << x_dest << " " << y_dest << std::endl;
}