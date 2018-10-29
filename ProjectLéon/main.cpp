#include <iostream>
#include <SFML/Graphics.hpp>
#include "plateau.h"
#include "piece.h"
#include <vector>
using namespace std;
/*vidéo du mec qui fait un jeu d'échec, parce qu'il y a de bonnes idées et fonctions 
https://www.youtube.com/watch?v=_4EuZI8Q8cs */
int main()
{
	sf::RenderWindow window(sf::VideoMode(600*1.2, 600*1.2), "Project Chess");
	plateau Echiquier;
	Echiquier.loadTextures();
	piece test;
	piece roiB;
	//roiB.init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece roiN;
	vector<piece> vect;
	vect.push_back(roiN);
	vect[0].init(Roi, 1, Echiquier.roiNText, Echiquier.lincolToXY('d', 8));
	piece reineB;
	piece fou1B;
	piece fou2B;
	piece cav1B;
	piece cav2B;
	piece tour1B;
	piece tour2B;
	piece pion1B;
	piece pion2B;
	piece pion3B;
	piece pion4B;
	piece pion5B;
	piece pion6B;
	piece pion7B;
	piece pion8B;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();


		Echiquier.afficher(window);
		window.draw(vect[0].spr);
		window.display();
	}

	return 0;
}