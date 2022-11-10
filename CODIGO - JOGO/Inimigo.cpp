#include "Inimigo.h"
#include <iostream>
using namespace std;
using namespace Entidades::Personagens;

Inimigo::Inimigo() : movAleatorio(-1), dt(0.f)
{
	corpo.setFillColor(sf::Color::Magenta);
	corpo.setPosition(sf::Vector2f(200.f, 200.f));
	
}

Inimigo::~Inimigo()
{
}

void Inimigo::executar()
{
	Inimigo::imprimir();

	Inimigo::moveAleatorio();
}

void Inimigo::moveAleatorio() 
{
	
	//srand(time(NULL));
	dt += relogio.getElapsedTime().asSeconds();
	relogio.restart();

	if (dt >= 2.0f) //Cada 1 segundo
	{
		movAleatorio = rand() % 2 + 1;
		dt = 0.f;
	}
	//cout << movAleatorio << endl;
	if (movAleatorio == 1) 
	{
		corpo.move(sf::Vector2f(0.1f, 0.f));
		coordenada.x += 0.1;
	}
	else 
	{
		corpo.move(sf::Vector2f(-0.1f, 0.f));
		coordenada.x -= 0.1;
	}
}
