#include "listaAlunos.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

ListaAlunos::ListaAlunos()
{
	strcpy_s(nomeListA, " ");
	elAlunoAct = nullptr;
	elAlunoPrim = nullptr;

	contAlunos = 0;
	nroAlunos = 45;
}

ListaAlunos::~ListaAlunos()
{
	elAluno *pElAlunoAux1, *pElAlunoAux2;
	pElAlunoAux1 = elAlunoPrim;
	pElAlunoAux2 = pElAlunoAux1;

	while (pElAlunoAux1 != NULL) 
	{
		pElAlunoAux2 = pElAlunoAux1->getProxElAl();
		delete(pElAlunoAux1);
		pElAlunoAux1 = pElAlunoAux2;
	}


}

void ListaAlunos::setNomeLista(char* n)
{
	strcpy_s(nomeListA, n);
}

char* ListaAlunos::getNomeLista() 
{
	return nomeListA;
}
void ListaAlunos::incluaAluno(Aluno* pA)
{
	if (contAlunos < nroAlunos && pA != NULL) {
		elAluno *pAux = NULL;
		pAux = new elAluno();
		pAux->setAluno(pA);

		if (elAlunoPrim == NULL)
		{
			elAlunoPrim = pAux;
			elAlunoAct = pAux;
		}
		else
		{
			elAlunoAct->setProxAl(pAux);
			pAux->setAntAl(elAlunoAct);
			elAlunoAct = pAux;
		}
	
	}
	else if (contAlunos > nroAlunos)
	{
		cout << "Sem vaga disponivel para Aluno, turma lotada!" << endl;

	}
	else 
	{
		cout << "Error: ponteiro = NULL" <<endl;
	}
}
void ListaAlunos::listarAlunosIn()
{
	elAluno* alu = NULL;
	alu = elAlunoPrim;

	while (alu != NULL)
	{
		cout << alu->getNome() << "(" << alu->getAluno()->getRa() << ")" << endl;
		alu = alu->getProxElAl();
	}
	cout << endl;
}

	
void ListaAlunos::listarAlunosFim() 
{
	elAluno* alu = NULL;
	alu = elAlunoAct;

	while (alu != NULL)
	{
		cout << alu->getNome() << "(" << alu->getAluno()->getRa() << ")" << endl;
		alu = alu->getAntElAl();
	}
	cout << endl;
}



void ListaAlunos::excluiAluno(elAluno* al)
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
