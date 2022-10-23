#pragma once
#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"

class Professor : public Pessoa 
{
private:
	Universidade *uni;
	Departamento *dep;
	int salario;


public:
	Professor(int diaNa, int mesNa, int anoNa, char* na = (char*)"");
	Professor();
	~Professor();

	void setUniAfil(Universidade *u);
	void setDepAfil(Departamento *d);
	char* trabalhaUni();
	char* trabalhaDep();

	void informaProventos();
};
