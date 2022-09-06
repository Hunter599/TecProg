#include "universidade.h"
#include "disciplina.h"

#include <iostream>
#include <string.h>


using std::cout;
using std::endl;



Disciplina::Disciplina(char* n) 
{
	setDisc(n);
	proxDisc = NULL;
	antDisc = NULL;
}
Disciplina::~Disciplina()
{

}

void Disciplina::setDisc(char* n) 
{
	strcpy_s(nomeDisc,n);
}

char* Disciplina::getDisc() 
{
	return nomeDisc;
}

void Disciplina::setDepAfil(Departamento* dep)
{
	dDepAfil = dep;

	dep->incluiDisciplina(this); 
}


void Disciplina::setProxDisc(Disciplina *proxDis) 
{
	if (proxDis != NULL)
	proxDisc = proxDis;
}

void Disciplina::setAntDisc(Disciplina *antDis) 
{
	antDisc = antDis;
}


Disciplina* Disciplina::getProxDisc() const
{
	return  proxDisc;
	
}

Disciplina* Disciplina::getAntDisc()  const
{
	return antDisc;
}


void Disciplina::incluiAluno(elAluno* al) 
{
	elAluno *pAux = NULL;
	pAux = new elAluno();

	if (al == NULL) 
	{
		alunoPrim = pAux;
		alunoAct = pAux;
	}
	else 
	{
		alunoAct->setProxAl(pAux);
		pAux->setAntAl(alunoAct);
		alunoAct = al;
	}
}

void Disciplina::excluiAluno(elAluno* al) 
{
	elAluno* aluProxAux = NULL;
	elAluno* aluAntAux = NULL;


	aluProxAux = al->getProxAl();
	aluAntAux = al->getAntAl();

	if (alunoPrim == al) 
	{
		alunoPrim->setProxAl(al->getProxAl());
		alunoPrim->setAntAl(NULL); //O primeiro nao tem anterior entao e nulo
		delete(al);
	}
	else 
	{
		aluProxAux->setAntAl(aluAntAux);
		aluAntAux->setProxAl(aluProxAux);
	}

}
/* LISTAR ALUNOS
void Disciplina::listeAlunosInicio() 
{
	Aluno* alu = NULL;
	alu = alunoPrim;

	cout << "Lista de alunos de " << nomeDisc << endl;
	while (alu != NULL) 
	{
		cout << alu->getNome() << "(" << alu->getRa() << ")" << endl;
		alu = alu->getProxAl();
	}

}
void Disciplina::listeAlunosFim() 
{
	Aluno* alu = NULL;
	alu = alunoAct;

	cout << "Lista de alunos de " << nomeDisc << endl;
	while (alu != NULL)
	{
		cout << alu->getNome() << "(" << alu->getRa() << ")" << endl;
		alu = alu->getAntAl();
	}

}
*/