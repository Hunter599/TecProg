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

void ListaPessoas::gravePessoas() 
{

	/*
	ofstream GravacaoPessoas("pessoas.dat", ios::out);

	if (!GravacaoPessoas)
	{
		cerr << "Arquivo não pode ser aberto" << endl;
		fflush(stdin);
		fflush(stdin);
		getchar();
	}
	*/

	Elemento<Pessoa>* pAuxElPessoa = NULL;
	pAuxElPessoa = lsPessoas.getpPrimeiro();

	Pessoa* pAuxPessoa = NULL;

	while (pAuxElPessoa != NULL)
	{
		
		pAuxPessoa = pAuxElPessoa->getInfo();

		//GravacaoPessoas << pAuxPessoa->getId() << ' ' << pAuxPessoa->getNome() << endl;

		pAuxElPessoa->getProximo();

	}

	//GravacaoPessoas.close();

}


void ListaPessoas::recuperePessoas() 
{
	/*
	ifstream RecuperacaoPessoas("pessoas.dat", ios::in);

	if (!RecuperacaoPessoas)
	{
		cerr << "Arquivo não pode ser aberto" << endl;
		fflush(stdin);
		fflush(stdin);
		getchar();
	}

	limpaLista();

	while (!RecuperacaoPessoas.eof())
	{
		Pessoa* pAuxPessoa;

		pAuxPessoa = new Pessoa();
		int id;
		char nome[150];

		RecuperacaoPessoas >> id >> nome;

		if (0 != strcmp(nome, " "))
		{
			pAuxPessoa->setId(id);
			pAuxPessoa->setNome(nome);

			incluaPessoa(pAuxPessoa);
		}
	}

	RecuperacaoPessoas.close();
	*/
}

