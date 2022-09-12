#include "listaUniversidades.h"
#include "elUniversidade.h"

ListaUniversidades::ListaUniversidades(int n)
{
	pElUniPrim = nullptr;
	pElUniAtual = nullptr;

	numero_unis = n;
	cont_unis = 0;

	strcpy_s(nomeListU, " ");
}

ListaUniversidades::~ListaUniversidades()
{
	elUniversidade* paux1, * paux2;

	paux1 = pElUniPrim;
	paux2 = paux1;

	while (paux1 != nullptr)
	{
		paux2 = paux1->getProxElUni();
		delete (paux1);
		paux1 = paux2;
	}

	pElUniPrim = nullptr;
	pElUniAtual = nullptr;
}

void ListaUniversidades::incluaUni(Universidade* uni)
{

	if (cont_unis < numero_unis && uni != nullptr)
	{
		elUniversidade* paux = nullptr;

		paux = new elUniversidade();

		paux->setUni(uni);

		if (pElUniPrim == nullptr)
		{
			pElUniPrim = paux;
			pElUniAtual = paux;
		}
		else
		{
			pElUniAtual->setProxElUni(paux);
			paux->setAntElUni(pElUniAtual);
			pElUniAtual = paux;
		}
		cont_unis++;
	}
	else if (cont_unis > numero_unis)
	{
		cout << "Nao eh possivel adicionar universidade, ha universidades demais!" << endl;

	}
	else
	{
		cout << "Error: ponteiro = NULL" << endl;
	}
}

//LISTA UNIVERSIDADES DESDE O INICIO ATE O FIM
void ListaUniversidades::listeUniIni()
{
	elUniversidade* paux;
	paux = pElUniPrim;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getProxElUni();
	}
}

//LISTA UNIVERSIDADES DESDE O FIM ATE O INICIO 
void ListaUniversidades::listeUniFim()
{
	elUniversidade* paux;
	paux = pElUniAtual;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getAntElUni();
	}
}

void ListaUniversidades::setNomeLista(char* n)
{
	strcpy_s(nomeListU, n);
}

char* ListaUniversidades::getNomeLista()
{
	return nomeListU;
}

Universidade* ListaUniversidades::localizar(char* n)
{
	elUniversidade* paux;
	paux = pElUniPrim;
	while (paux != nullptr)
	{
		if (0 == strcmp(n, paux->getNome()))
		{
			return paux->getUni();
		}
		paux = paux->getProxElUni();
	}
	return nullptr;
}