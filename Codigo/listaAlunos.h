#pragma once
#include "elAluno.h"

class ListaAlunos
{
private:
	elAluno* elAlunoPrim;
	elAluno* elAlunoAct;

	int nroAlunos;
	int contAlunos;

	char nomeListA[100];

public:
	ListaAlunos();
	~ListaAlunos();
	void setNomeLista(char* n);
	char* getNomeLista();
	void incluaAluno(Aluno* pA);
	void excluiAluno(elAluno* pA);
	void listarAlunosIn();
	void listarAlunosFim();

};
