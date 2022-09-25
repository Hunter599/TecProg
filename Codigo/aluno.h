#pragma once

#include "pessoa.h"

class Aluno : public Pessoa 
{
private:
	int RA;

	

public:

	Aluno(int diaNa, int mesNa, int anoNa, char* na = (char*)"", int ra =-1);
	Aluno();
	~Aluno();

	void setRa(int num);
	int getRa();

	void informaProventos(); // ELIMINAR QUANDO INCLUIR ESTAGIARIO

	


};
