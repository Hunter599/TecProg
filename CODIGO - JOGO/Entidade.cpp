#include "Entidade.h"

using namespace Entidades;

Entidade::Entidade(): coordenada(),
tam()
{
	coordenada.setVal(corpo.getPosition().x, corpo.getPosition().y);
	tam.setVal(corpo.getSize().x, corpo.getSize().y);

}

Entidade::~Entidade()
{
}

Coord* Entidade::getCoord() 
{
	return &coordenada;
};

Coord* Entidade::getTam() 
{
	return &tam;
}


void Entidade::imprimir() 
{
	GerenteGrafico* pGerenteGraf = GerenteGrafico::getInstance();
	//pGerenteGraf->CenterView(pos);
	pGerenteGraf->render(&corpo);

}