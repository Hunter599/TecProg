#include "aluno.h"
#include <string.h>

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* na) :
{
	Aluno::inicializa(diaNa, mesNa, anoNa, na);
	Aluno::setRa(-1);
}

Aluno::Aluno(int i) 
{
}

Aluno::~Aluno() 
{
}

void Aluno::setRa(int num) 
{
	RA = num;
}

int Aluno::getRa() 
{
	return RA;
}