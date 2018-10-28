#include "piece.h"
#include "plateau.h"

piece::piece() {

}
void piece::init(classes cl, int team, sf::Texture text, sf::Vector2f position) {
	this->classe = cl;
	this->spr.setTexture(text);
	this->team = team;
	this->pos = position;
}


piece::~piece()
{
}

sf::Vector2f piece::getPosition() {
	return sf::Vector2f(this->Xpos, this->Ypos);
}
void piece::setPosition(sf::Vector2f posVoulu) {
	pos = posVoulu;
}