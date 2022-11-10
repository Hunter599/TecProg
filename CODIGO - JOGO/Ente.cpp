#include "Ente.h"

Ente::Ente(const char* path) : corpo(sf::Vector2f(100.f, 100.f)),
pGerenteGrafico()
{
	
	pGerenteGrafico = GerenteGrafico::getInstance();
	this->setTextura(path);
}

Ente::~Ente()
{
}



//void Ente::imprimir() {}

void Ente::setTextura(const char* path) 
{
	if (path != " ") {
		this->textura = pGerenteGrafico->loadTexture(path);
		this->corpo.setTexture(textura);
	}

}

void Ente::setSize(float x, float y) 
{
	corpo.setSize(sf::Vector2f(x,y));
}