#include "Entidade.h"

Entidade::Entidade(): corpo(sf::Vector2f(573.f, 1113.f))
{
}

Entidade::~Entidade()
{
}

sf::RectangleShape* Entidade::getCorpo() 
{
	return &corpo;
}

void Entidade::setTextura(const char* path)
{
	GerenteGrafico* pGerenteGraf = GerenteGrafico::getInstance();
	pGerenteGraf->loadTexture(path);
}

void Entidade::imprimir() 
{
	GerenteGrafico* pGerenteGraf = GerenteGrafico::getInstance();
	pGerenteGraf->render(&corpo);

}