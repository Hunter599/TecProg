#include "Rocha.h"
using namespace Entidades::Obstaculos;

Entidades::Obstaculos::Rocha::Rocha()
{
	corpo.setFillColor(sf::Color::Cyan);
	corpo.setSize(sf::Vector2f(100.f, 100.f));
	corpo.setPosition(sf::Vector2f(-600.f, 200.f));
}

Entidades::Obstaculos::Rocha::~Rocha()
{
}
