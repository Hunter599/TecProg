#pragma once
#include "Aluno.h"
#include "Lista.h"

class ListaAlunos
{
private:
	Lista<Aluno> lAlunos;
	int contAlunos;
	int nroAlunos;
public:
	ListaAlunos();
	~ListaAlunos();

	void limpaLista();
	
	void incluaAluno(Aluno* pA);
	void excluiAluno(Aluno* pA);
	
	void listarAlunosIn();
	void listarAlunosFim();

	void graveAlunos();
	void recupereAlunos();

};
