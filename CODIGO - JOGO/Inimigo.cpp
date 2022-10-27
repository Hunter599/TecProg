#include "Inimigo.h"

Inimigo::Inimigo()
{
	corpo.setFillColor(sf::Color::Magenta);
	corpo.setPosition(sf::Vector2f(200.f, 200.f));
}

Inimigo::~Inimigo()
{
}

void Inimigo::executar()
{
}
