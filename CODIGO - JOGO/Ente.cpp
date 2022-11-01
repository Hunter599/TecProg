#include "Ente.h"

Ente::Ente()
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