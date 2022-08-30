#include "aluno.h"
#include <string.h>

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* na, int ra):
	Pessoa()
{
	inicializa(diaNa, mesNa, anoNa, na);
	setRa(ra);
}

Aluno::Aluno() 
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