#pragma once

#include "pessoa.h"

class Aluno : public Pessoa 
{
private:
	int RA;

	Aluno* proxAluno;
	Aluno* antAluno;

public:

	Aluno(int diaNa, int mesNa, int anoNa, char* na = (char*)"", int ra =-1);
	Aluno();
	~Aluno();

	void setRa(int num);
	int getRa();

	Aluno* getProxAl();
	Aluno* getAntAl();

	void setProxAl(Aluno* proxAl);
	void setAntAl(Aluno* antAl);


};
