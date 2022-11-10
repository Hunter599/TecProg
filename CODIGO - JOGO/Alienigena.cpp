#include "Alienigena.h"
using namespace Entidades::Personagens;

Entidades::Personagens::Alienigena::Alienigena()
{
	corpo.setFillColor(sf::Color::Green);
	corpo.setPosition(sf::Vector2f(400.f, 100.f));
}

Entidades::Personagens::Alienigena::~Alienigena()
{
}

/*void Entidades::Personagens::Alienigena::executar()
{
	Alienigena::imprimir();
}*/
