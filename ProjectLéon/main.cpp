#include "plateau.h"
using namespace std;
/*vidéo du mec qui fait un jeu d'échec, parce qu'il y a de bonnes idées et fonctions 
https://www.youtube.com/watch?v=_4EuZI8Q8cs */
int main()
{
	sf::RenderWindow window(sf::VideoMode(600*1.2, 600*1.2), "Project Chess");
	plateau Echiquier;
	Echiquier.loadTextures();
	piece test;
	vector<piece> vect;
	//vect.push_back(roiN);
	//vect[0].init(Roi, 1, Echiquier.roiNText, Echiquier.lincolToXY('d', 8));
	
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece fou1B;
	vect.push_back(fou1B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece fou2B;
	vect.push_back(fou2B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece cav1B;
	vect.push_back(cav1B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece cav2B;
	vect.push_back(cav2B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece tour1B;
	vect.push_back(tour1B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));
	piece tour2B;
	vect.push_back(tour2B);
	//vect[0].init(Roi, 1, Echiquier.roiBText, Echiquier.lincolToXY('d', 1));*/
	piece pion1B;
	vect.push_back(pion1B);
	piece pion2B;
	vect.push_back(pion2B);
	piece pion3B;
	vect.push_back(pion3B);
	piece pion4B;
	vect.push_back(pion4B);
	piece pion5B;
	vect.push_back(pion5B);
	piece pion6B;
	vect.push_back(pion6B);
	piece pion7B;
	vect.push_back(pion7B);
	piece pion8B;
	vect.push_back(pion8B);
	piece reineB;
	vect.push_back(reineB);
	piece roiB;
	vect.push_back(roiB);

	piece fou1N;
	vect.push_back(fou1N);

	piece fou2N;
	vect.push_back(fou2N);

	piece cav1N;
	vect.push_back(cav1N);

	piece cav2N;
	vect.push_back(cav2N);

	piece tour1N;
	vect.push_back(tour1N);	

	piece tour2N;
	vect.push_back(tour2N);
	piece pion1N;
	vect.push_back(pion1N);
	piece pion2N;
	vect.push_back(pion2N);
	piece pion3N;
	vect.push_back(pion3N);
	piece pion4N;
	vect.push_back(pion4N);
	piece pion5N;
	vect.push_back(pion5N);
	piece pion6N;
	vect.push_back(pion6N);
	piece pion7N;
	vect.push_back(pion7N);
	piece pion8N;
	vect.push_back(pion8N);
	piece reineN;
	vect.push_back(reineN);
	piece roiN;
	vect.push_back(roiN);
	Echiquier.initPieces(vect);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();


		Echiquier.afficher(window,vect);
		//window.draw(vect[16].spr);
		//window.draw(vect[17].spr);
		window.display();
	}

	return 0;
}