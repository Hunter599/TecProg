#pragma once
#include "elDepartamento.h"

class ListaDepartamentos
{
private:
	elDepartamento* pElDepPrim;
	elDepartamento* pElDepAtual;

	int numero_deps;
	int cont_deps;

	char nomeListD[100];

public:
	ListaDepartamentos(int n = 45);
	~ListaDepartamentos();

	void setNomeLista(char* n);
	char* getNomeLista();

	void incluaDep(Departamento* dep);
	void listeDepsIni();
	void listeDepsFim();
};