#include "piece.h"

piece::piece() {

}
void piece::init(classes cl, int team, sf::Texture &text, sf::Vector2f position) {
	this->classe = cl;
	this->spr.setTexture(text);
	this->team = team;
	this->pos=position;
	this->spr.setPosition(position);
}


piece::~piece()
{
}

sf::Vector2f piece::getPosition() {
	return this->pos;
}

void piece::setPosition(sf::Vector2f posVoulu) {
	this->pos = posVoulu;
}