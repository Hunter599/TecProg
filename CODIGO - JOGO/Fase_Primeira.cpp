#include "Fase_Primeira.h"
#include <stdlib.h>
#include <time.h>

#include <iostream>
using namespace std;

namespace Fases {
	Fase_Primeira::Fase_Primeira()
	{
		//sorteia quantos inimigos (entre 3 e 5)
		cout << "a" << endl;
		int n = 1;
			//+ rand() % 3;

		for (int i = 0; i < n; i++)
		{
			LEnt.LEs.incluaElemento(static_cast <Entidade*>(new Robo));
			
		}

	}

	Fases::Fase_Primeira::~Fase_Primeira()
	{
	}

	void Fases::Fase_Primeira::executar()
	{
		LEnt.LEs.executarTodos();
	}

	void Fases::Fase_Primeira::imprimir()
	{
	}
}