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
	imprimir();
}



void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        corpo.move(sf::Vector2f(0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        corpo.move(sf::Vector2f(-0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        corpo.move(sf::Vector2f(0.f, -0.1f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        corpo.move(sf::Vector2f(0.f, 0.1f));
    }
}

