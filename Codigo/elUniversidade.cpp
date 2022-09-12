#include "elUniversidade.h"

//contrutora - inicializa
elUniversidade::elUniversidade()
{
	pUniversidade = nullptr;
	proxUni = nullptr;
	antUni = nullptr;
}

//destrutora
elUniversidade::~elUniversidade()
{
	pUniversidade = nullptr;
	proxUni = nullptr;
	antUni = nullptr;
}

char* elUniversidade::getNome()
{
	return pUniversidade->getNome();
}

void elUniversidade::setUni(Universidade* uni)
{
	if (uni != nullptr)
	{
		pUniversidade = uni;
	}
}

Universidade* elUniversidade::getUni()
{
	return pUniversidade;
}

void elUniversidade::setProxElUni(elUniversidade* proxU)
{
	proxUni = proxU;
}

void elUniversidade::setAntElUni(elUniversidade* antU)
{
	antUni = antU;
}


elUniversidade* elUniversidade::getProxElUni()
{
	return proxUni;
}

elUniversidade* elUniversidade::getAntElUni()
{
	return antUni;
}