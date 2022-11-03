#include "Ente.h"

Ente::Ente(): corpo(sf::Vector2f(100.f, 100.f))
{
}

Ente::~Ente()
{
}



//void Ente::imprimir() {}

void Ente::setTextura(const char* path) 
{
	GerenteGrafico* gerente = gerente->getInstance();
	gerente->loadTexture(path);
}