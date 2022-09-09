#pragma once
#include "departamento.h"

class elDepartamento
{
private:
	Departamento* pDepartamento;
	elDepartamento* proxDep;
	elDepartamento* antDep;

public:
	elDepartamento();
	~elDepartamento();

	char* getNome();
	void setDep(Departamento* dep);
	Departamento* getDep();

	void setProxElDep(elDepartamento* proxD);
	void setAntElDep(elDepartamento* antD);

	elDepartamento* getProxElDep();
	elDepartamento* getAntElDep();
};