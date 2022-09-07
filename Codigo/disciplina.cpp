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