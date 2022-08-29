#pragma once

#include "pessoa.h"

class Aluno : public Pessoa 
{
private:
	int RA;

public:

	Aluno(int diaNa, int mesNa, int anoNa, char* na = (char*)"");
	Aluno(int i);
	~Aluno();

	void setRa(int num);
	int getRa();


};
