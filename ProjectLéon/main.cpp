#include <iostream>
#include <SFML/Graphics.hpp>
#include "plateau.h"
using namespace std;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
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