#include "disciplina.h"

#include <iostream>
#include <string.h>


using std::cout;
using std::endl;



Disciplina::Disciplina(char* n) 
{
	setDisc(n);
	dDepAfil = NULL;
}
Disciplina::~Disciplina()
{

}

void Disciplina::setDisc(char* n) 
{
	strcpy_s(nomeDisc,n);
}

char* Disciplina::getNomeDisc()
{
	return nomeDisc;
}

void Disciplina::setDepAfil(Departamento* dep)
{
	dDepAfil = dep;

	dep->incluiDisciplina(this); 
}


void Disciplina::incluiAluno(Aluno* al) 
{
	objListaAlunos.incluaAluno(al);
}


// LISTAR ALUNOS
void Disciplina::listeAlunosInicio() 
{
	cout << "Alunos de " << nomeDisc << " :" << endl;
	objListaAlunos.listarAlunosIn();
}
void Disciplina::listeAlunosFim() 
{
	cout << "Alunos de " << nomeDisc << " :" << endl;
	objListaAlunos.listarAlunosFim();
}
