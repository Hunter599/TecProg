#include "listaAlunos.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

listaAlunos::listaAlunos()
{
	strcpy_s(nome, " ");
	elAlunoAct = NULL;
	elAlunoPrim = NULL;

	contAlunos = 0;
	nroAlunos = 45;
}

listaAlunos::~listaAlunos()
{
}

void listaAlunos::setNomeLista(char* n) 
{
	strcpy_s(nome, n);
}
void listaAlunos::incluaAluno(Aluno* pA) 
{
	if (contAlunos < 45 && pA != NULL) {
		elAluno *pAux = NULL;
		pAux = new elAluno();

		if (pA == NULL)
		{
			elAlunoPrim = pAux;
			elAlunoAct = pAux;
		}
		else
		{
			elAlunoAct->setProxAl(pAux);
			pAux->setAntAl(elAlunoAct);
			elAlunoAct->setAluno(pA);
		}
	
	}
	else if (contAlunos > 45)
	{
		

	}
}
void listaAlunos::listarAlunosIn() 
{
	elAluno* alu = NULL;
	alu = elAlunoPrim;

	cout << "Lista de alunos de " << nome << endl;
	while (alu != NULL)
	{
		cout << alu->getNome() << "(" << alu->getAluno()->getRa() << ")" << endl;
		alu = alu->getProxElAl();
	}
}

	
void listaAlunos::listarAlunosFim() 
{
	elAluno* alu = NULL;
	alu = elAlunoAct;

	cout << nome << ": "<< endl;
	while (alu != NULL)
	{
		cout << alu->getNome() << "(" << alu->getAluno()->getRa() << ")" << endl;
		alu = alu->getAntElAl();
	}
}



void listaAlunos::excluiAluno(elAluno* al)
{
	elAluno* aluProxAux = NULL;
	elAluno* aluAntAux = NULL;


	aluProxAux = al->getProxElAl();
	aluAntAux = al->getAntElAl();

	if (elAlunoPrim == al)
	{
		elAlunoPrim->setProxAl(al->getProxElAl());
		elAlunoPrim->setAntAl(NULL); //O primeiro nao tem anterior entao e nulo
	}
	else
	{
		aluProxAux->setAntAl(aluAntAux);
		aluAntAux->setProxAl(aluProxAux);
	}

	delete(al);

}
