#include "Entidade.h"

using namespace Entidades;

Entidade::Entidade() 
{
}

Entidade::~Entidade()
{
}


void Entidade::imprimir() 
{
	GerenteGrafico* pGerenteGraf = GerenteGrafico::getInstance();
	pGerenteGraf->render(&corpo);

}