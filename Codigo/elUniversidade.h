#pragma once
#include "universidade.h"

class elUniversidade
{
private:
	Universidade* pUniversidade;
	elUniversidade* proxUni;
	elUniversidade* antUni;

public:
	elUniversidade();
	~elUniversidade();

	char* getNome();
	void setUni(Universidade* uni);
	Universidade* getUni();

	void setProxElUni(elUniversidade* proxU);
	void setAntElUni(elUniversidade* antU);

	elUniversidade* getProxElUni();
	elUniversidade* getAntElUni();
};