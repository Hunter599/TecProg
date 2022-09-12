#include "listaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas() 
{
	strcpy_s(nomeListD, " ");
	elDisciplinaPrim = nullptr;
	elDisciplinaAtual = nullptr;
}
ListaDisciplinas::~ListaDisciplinas() 
{
	ElDisciplina *pDiscAux1, *pDiscAux2 ;
	pDiscAux1 = elDisciplinaPrim;
	pDiscAux2 = pDiscAux1;

	while (pDiscAux1 != nullptr) 
	{
		pDiscAux2 = pDiscAux1->getProxElDisc();
		delete (pDiscAux1);
		pDiscAux1 = pDiscAux2;
	}
	
}

void ListaDisciplinas::setNomeLista(char* n) 
{
	strcpy_s(nomeListD, n);
}
char* ListaDisciplinas::getNomeLista() 
{
	return nomeListD;
}

void ListaDisciplinas::incluaDisciplina(Disciplina* disc)
{
	if (disc != nullptr) {
		ElDisciplina *discAux;
		discAux = new ElDisciplina;
		discAux->setDisciplina(disc);

		if (elDisciplinaPrim == nullptr)
		{
			elDisciplinaPrim = discAux;
			elDisciplinaAtual = discAux;
		}
		else 
		{
			elDisciplinaAtual->setProxElDisc(discAux);
			discAux->setAntElDisc(elDisciplinaAtual);
			elDisciplinaAtual = discAux;
		}

	}
	else 
	{
		cout << "Error: ponteiro invalido" << endl;
	}
}
void ListaDisciplinas::listarDisciplinasInicio() 
{
	ElDisciplina* elDiscAux;
	elDiscAux = elDisciplinaPrim;

	while (elDiscAux != nullptr)						//<-- O ponteiro da ultima disciplina para "ProxDiscp" e nulo 
	{
		cout << elDiscAux->getDisciplina()->getNomeDisc() << endl;
		elDiscAux = elDiscAux->getProxElDisc();
	}

}
void ListaDisciplinas::listarDisciplinasFim() 
{
	ElDisciplina* elDiscAux;
	elDiscAux = elDisciplinaAtual;

	while (elDiscAux != nullptr)						//<-- O ponteiro da primeira disciplina para "AntDiscp" e nulo 
	{
		cout << elDiscAux->getDisciplina()->getNomeDisc() << endl;
		elDiscAux = elDiscAux->getAntElDisc();
	}
}