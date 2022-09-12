#pragma once
#include "elUniversidade.h"

class ListaUniversidades
{
private:
	elUniversidade* pElUniPrim;
	elUniversidade* pElUniAtual;

	int numero_unis;
	int cont_unis;

	char nomeListU[100];

public:
	ListaUniversidades(int n = 45);
	~ListaUniversidades();

	void setNomeLista(char* n);
	char* getNomeLista();

	void incluaUni(Universidade* uni);
	void listeUniIni();
	void listeUniFim();
	Universidade* localizar(char* n);

};