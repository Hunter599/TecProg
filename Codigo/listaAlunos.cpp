#include "listaAlunos.h"
#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using namespace std;

ListaAlunos::ListaAlunos()
{
	contAlunos = 0;
	nroAlunos = 45;
}

ListaAlunos::~ListaAlunos()
{
	limpaLista();


}

void ListaAlunos::limpaLista() 
{
	lAlunos.limpar();
}


void ListaAlunos::incluaAluno(Aluno* pA)
{
	if (contAlunos < nroAlunos && pA != NULL) {
		lAlunos.incluaInfo(pA);
		/*
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
		*/
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
	Elemento<Aluno>* pElAux = NULL;
	pElAux = lAlunos.getpPrimeiro();
	
	Aluno* pAlAux = NULL;

	while (pElAux != NULL)
	{
		pAlAux = pElAux->getInfo();
		cout << pAlAux->getNome() << "(" << pAlAux->getRa() << ")" << endl;
		pElAux = pElAux->getProximo();
	}
	cout << endl;
}

	
void ListaAlunos::listarAlunosFim() 
{
	Elemento<Aluno>* pElAux = NULL;
	pElAux = lAlunos.getpAtual();

	Aluno* pAlAux = NULL;

	while (pElAux != NULL)
	{
		pAlAux = pElAux->getInfo();
		cout << pAlAux->getNome() << "(" << pAlAux->getRa() << ")" << endl;
		pElAux = pElAux->getAnterior();
	}
	cout << endl;
}



void ListaAlunos::excluiAluno(Aluno* pA)
{
	/*
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
	*/
}

void ListaAlunos::graveAlunos() 
{
	/*
	ofstream GravacaoAlunos("alunos.dat", ios::out);

	if (!GravacaoAlunos) 
	{
		cerr << "Arquivo não pode ser aberto" << endl;
		fflush(stdin);
		fflush(stdin);
		getchar();
	}
	*/

	Elemento<Aluno>* pAuxElAluno = NULL;
	pAuxElAluno = lAlunos.getpPrimeiro();

	while (pAuxElAluno != NULL) 
	{
		Aluno* pAuxAluno;
		pAuxAluno = pAuxElAluno->getInfo();

		//GravacaoAlunos << pauxAluno->getId() << ' ('
		// <<pAuxAluno->getRa() << ') ' << pAuxAluno->getNome() << endl;

		pAuxElAluno->getProximo();

	}

	//GravacaoAlunos.close();
	
}

void ListaAlunos::recupereAlunos() 
{
	/* 
	ifstream RecuperacaoAlunos("alunos.dat", ios::in);

	if (!RecuperacaoAlunos) 
	{
		cerr << "Arquivo não pode ser aberto" << endl;
		fflush(stdin);
		fflush(stdin);
		getchar();
	}

	limpaLista();

	while (!RecuperacaoAlunos.eof()) 
	{
		Aluno* pAuxAluno;

		pAuxAluno = new Aluno();
		int id;
		int RA;
		char nome[150];

		RecuperacaoAlunos >> id >> RA >> nome;

		if (0 != strcmp(nome, " ")) 
		{
			pAuxAluno->setId(id);
			pAuxAluno->setRa(RA);
			pAuxAluno->setNome(nome);

			incluaAluno(pAuxAluno);
		}
	}

	RecuperacaoAlunos.close();
	*/
}
