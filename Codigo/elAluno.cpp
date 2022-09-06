#include "elAluno.h"
#define NULL 0
//inicializar
elAluno::elAluno() 
{
	pAluno = NULL;
	proxAluno = NULL;
	antAluno = NULL;
}

elAluno::~elAluno() 
{
	pAluno = NULL;
	proxAluno = NULL;
	antAluno = NULL;
}

void elAluno::setAluno(Aluno* al) 
{
	if (al != NULL) 
	{
		pAluno = al;
	}
}

char* elAluno::getNome() 
{
		return pAluno->getNome();	
}

Aluno* elAluno::getAluno() 
{
	return pAluno;
}

//passar funcoes de aluno.cpp


void elAluno::setProxAl(Aluno* proxAl)
{
	proxAluno = proxAl;
}
void elAluno::setAntAl(Aluno* antAl)
{
	antAluno = antAl;
}


Aluno* elAluno::getProxAl()
{
	return proxAluno;
}

Aluno* elAluno::getAntAl()
{
	return antAluno;
}
