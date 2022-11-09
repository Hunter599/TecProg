#include "Robo.h"
using namespace Entidades::Personagens;

Entidades::Personagens::Robo::Robo()
{
	corpo.setFillColor(sf::Color::Red);
	corpo.setPosition(sf::Vector2f(300.f, 300.f));
}

Entidades::Personagens::Robo::~Robo()
{
}

/*void Entidades::Personagens::Robo::executar()
{
	Robo::imprimir();
}*/
