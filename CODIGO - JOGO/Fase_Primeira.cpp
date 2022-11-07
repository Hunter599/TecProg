#include "Fase_Primeira.h"
#include <stdlib.h>
#include <time.h>
using namespace Fases;

Fases::Fase_Primeira::Fase_Primeira()
{
	//sorteia quantos inimigos (entre 3 e 5)
	int n = 3 + rand() % 3;
	
	for (int i = 0; i < n; i++)
	{
		LEnt.LEs.incluaElemento(dynamic_cast <Entidade*>(new Robo));
	}
	
}

Fases::Fase_Primeira::~Fase_Primeira()
{
}

void Fases::Fase_Primeira::executar()
{
}

void Fases::Fase_Primeira::imprimir()
{
}
