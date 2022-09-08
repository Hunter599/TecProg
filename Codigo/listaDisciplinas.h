#pragma once
#include "elDisciplina.h"

class ListaDisciplinas
{
private:

	char nomeListD[100];

	ElDisciplina *elDisciplinaPrim;
	ElDisciplina *elDisciplinaAtual;
public:
	ListaDisciplinas();
	~ListaDisciplinas();
	
	void setNomeLista(char* n);
	char* getNomeLista();
	void incluaDisciplina(Disciplina* disc);
	void listarDisciplinasInicio();
	void listarDisciplinasFim();



};

