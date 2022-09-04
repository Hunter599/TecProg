#include "aluno.h"

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* na, int ra)
{
	inicializa(diaNa, mesNa, anoNa, na);
	setRa(ra);
}

Aluno::Aluno() 
{
	Aluno(0, 0, 0);
	proxAluno = NULL;
	antAluno = NULL;
}

Aluno::~Aluno() 
{
	proxAluno = NULL;
	antAluno = NULL;
}

void Aluno::setRa(int num) 
{
	RA = num;
}

int Aluno::getRa() 
{
	if (RA == -1) 
	{
		cout << "RA requerindo inicializacao apropiada" << endl;
	}
	return RA;
}

void Aluno::setProxAl(Aluno* proxAl) 
{
	proxAluno = proxAl;
}
void Aluno::setAntAl(Aluno* antAl) 
{
	antAluno = antAl;
}


Aluno* Aluno::getProxAl() 
{
	return proxAluno;
}

Aluno* Aluno::getAntAl() 
{
	return antAluno;
}