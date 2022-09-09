#include "listaDepartamentos.h"

//Eu fiz a numero_deps ser inicializada com valor default 45 passado p/ parâmetro
ListaDepartamentos::ListaDepartamentos(int n)
{
	pElDepPrim = nullptr;
	pElDepAtual = nullptr;

	numero_deps = n;
	cont_deps = 0;

	strcpy_s(nomeListD, " ");
}

ListaDepartamentos::~ListaDepartamentos()
{
	elDepartamento *paux1, *paux2;

	paux1 = pElDepPrim;
	paux2 = paux1;

	while (paux1 != nullptr)
	{
		paux2 = paux1->getProxElDep();
		delete (paux1);
		paux1 = paux2;
	}

	pElDepPrim = nullptr;
	pElDepAtual = nullptr;
}

void ListaDepartamentos::incluaDep(Departamento* dep)
{

	if (cont_deps < numero_deps && dep != nullptr)
	{
		elDepartamento* paux = nullptr;

		paux = new elDepartamento();

		paux->setDep(dep);

		if (pElDepPrim == nullptr)
		{
			pElDepPrim = paux;
			pElDepAtual = paux;
		}
		else
		{
			pElDepAtual->setProxElDep(paux);
			paux->setAntElDep(pElDepAtual);
			pElDepAtual = paux;
		}
		cont_deps++;
	}
	else if (cont_deps > numero_deps)
	{
		cout << "Nao eh possivel adicionar departamento, ha departamentos demais!" << endl;

	}
	else
	{
		cout << "Error: ponteiro = NULL" << endl;
	}
}

//LISTA DEPARTAMENTOS DESDE O INICIO ATE O FIM
void ListaDepartamentos::listeDepsIni()
{
	elDepartamento* paux;
	paux = pElDepPrim;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getProxElDep();
	}
}

//LISTA DEPARTAMENTOS DESDE O FIM ATE O INICIO 
void ListaDepartamentos::listeDepsFim()
{
	elDepartamento* paux;
	paux = pElDepAtual;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getAntElDep();
	}
}

void ListaDepartamentos::setNomeLista(char* n)
{
	strcpy_s(nomeListD, n);
}

char* ListaDepartamentos::getNomeLista()
{
	return nomeListD;
}