#pragma once
#include "elAluno.h"

class listaAlunos
{
private:
	elAluno* elAlunoPrim;
	elAluno* elAlunoAct;

	int nroAlunos;
	int contAlunos;

	char nome[100];

public:
	listaAlunos();
	~listaAlunos();
	void setNomeLista(char* n);
	void incluaAluno(Aluno* pA);
	void excluiAluno(elAluno* pA);
	void listarAlunosIn();
	void listarAlunosFim();

};
