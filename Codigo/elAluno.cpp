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


void elAluno::setProxAl(elAluno* proxAl)
{
	proxAluno = proxAl;
}
void elAluno::setAntAl(elAluno* antAl)
{
	antAluno = antAl;
}


elAluno* elAluno::getProxElAl()
{
	return proxAluno;
}

elAluno* elAluno::getAntElAl()
{
	return antAluno;
}
