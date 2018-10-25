#include <iostream>
#include <SFML/Graphics.hpp>
#include "plateau.h"
#include "piece.h"
using namespace std;
/*vid�o du mec qui fait un jeu d'�chec, parce qu'il y a de bonnes id�es et fonctions 
https://www.youtube.com/watch?v=_4EuZI8Q8cs */
int main()
{
	sf::RenderWindow window(sf::VideoMode(600*1.2, 600*1.2), "Project Chess");
	plateau Echiquier;
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
		window.display();
	}

	return 0;
}