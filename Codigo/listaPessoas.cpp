#include "listaPessoas.h"

ListaPessoas::ListaPessoas() {}
ListaPessoas::~ListaPessoas() {}

void ListaPessoas::limpaLista() 
{
	lsPessoas.limpar();
}

void ListaPessoas::incluaPessoa(Pessoa* pP) 
{
	if (pP != NULL) 
	{
		lsPessoas.incluaInfo(pP);
	}
	else 
	{
		cout << "Pointeiro pessoa NULL -- Olhar ListaPessoas.cpp-.h" << endl;
	}
}

void ListaPessoas::listarPessoasIn() 
{
	Elemento<Pessoa>* pElAux = NULL;
	pElAux = lsPessoas.getpPrimeiro();

	Pessoa* pPAux = NULL;

	while (pElAux != NULL)
	{
		pPAux = pElAux->getInfo();
		cout <<pPAux->getNome() << endl;
		pElAux = pElAux->getProximo();
	}
	cout << endl;
}

void ListaPessoas::listarPessoasFim() 
{
	Elemento<Pessoa>* pElAux = NULL;
	pElAux = lsPessoas.getpAtual();

	Pessoa* pPAux = NULL;

	while (pElAux != NULL)
	{
		pPAux = pElAux->getInfo();
		cout << pPAux->getNome() << endl;
		pElAux = pElAux->getAnterior();
	}
	cout << endl;
}

void gravePessoas() {}
void recuperePessoas() {}

