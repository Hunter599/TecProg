#include "Jogador.h"

using namespace Entidades::Personagens;

Jogador::Jogador()
{

}

Jogador::~Jogador()
{
}


void Jogador::executar()
{
    mover();
	pGerenteGrafico->CenterView(&coordenada);
	imprimir();
}



void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        corpo.move(sf::Vector2f(0.1f, 0.f));
		coordenada.addX(0.1);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        corpo.move(sf::Vector2f(-0.1f, 0.f));
		coordenada.addX(-0.1);
    }
	float y = coordenada.getY();
	if (y < 5.0) 
	{
		corpo.move(sf::Vector2f(0.f, 0.1f));
		coordenada.addY(0.1);
	}
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
		//TESTE
        corpo.move(sf::Vector2f(0.f, -0.1f));
		coordenada.addY(-0.1);
    }
	/*
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        corpo.move(sf::Vector2f(0.f, 0.1f));
		coordenada.y += 0.1;
    }*/
}

