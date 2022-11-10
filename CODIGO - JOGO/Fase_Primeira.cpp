#include "Fase_Primeira.h"
#include <stdlib.h>
#include <time.h>

#include <iostream>
using namespace std;

namespace Fases {
	Fase_Primeira::Fase_Primeira()
	{
		
		Fase_Primeira::corpo.setPosition(-700.0,-500.0);
		//sorteia quantos inimigos (entre 3 e 5)
		
		int n = 1;
			//+ rand() % 3;

		for (int i = 0; i < n; i++)
		{
			LEnt.LEs.incluaElemento(dynamic_cast <Entidade*>(new Robo));
			//cout << "a" << endl;
		}

	}

	Fase_Primeira::~Fase_Primeira()
	{
	}

	void Fase_Primeira::executar()
	{
		LEnt.LEs.executarTodos();
	}
	//ENTE JA TEM UMA FUNCAO IMPRIMIR -- REMOVER O COMENTARIO SE FAZ IMPRIMIR NA FASE
	void Fase_Primeira::imprimir()
	{
		pGerenteGrafico->render(&corpo);
	}
}