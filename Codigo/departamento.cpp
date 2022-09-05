#include "universidade.h"
#include "departamento.h"
#include "disciplina.h"

#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

Departamento::Departamento(char* nd){
    strcpy_s(nomeD, nd);
	disciplinaAtual = NULL;
	disciplinaPrim = NULL;
}

Departamento::~Departamento(){
	disciplinaAtual = NULL;
	disciplinaPrim = NULL;
}

void Departamento::setNome(char* nd){
    strcpy_s(nomeD,nd);
}

char* Departamento::getNome(){
    return nomeD;
}

void Departamento::setUniAfil(Universidade *unid) 
{
	uniD = unid;
}

void Departamento::incluiDisciplina(Disciplina* disc) 
{
	if (disc == NULL) 
	{
		disciplinaPrim = disc;
		disciplinaAtual = disc;
	}
	else
	{
		disciplinaAtual->setProxDisc(disc);
		disc->setAntDisc(disciplinaAtual);
		disciplinaAtual = disc;
	}
}

//LISTA DISCIPLINAS DESDE O INICIO ATE O FIM
void Departamento::listeDisciplinasInicio() 
{
	Disciplina* DiscAct;
	DiscAct = disciplinaPrim;
	
	cout << "Disciplinas de: " << nomeD << endl;
	while (DiscAct != NULL)						//<-- O ponteiro da ultima disciplina para "ProxDiscp" e nulo 
	{
		cout << DiscAct->getDisc() << endl;
		DiscAct = DiscAct->getProxDisc();
	}
	
}

//LISTA DISCIPLINAS DESDE O FIM ATE O INICIO 
void Departamento::listeDisciplinasFim() 
{
	Disciplina* DiscAct;
	DiscAct = disciplinaAtual;

	cout << "Disciplinas de: " << nomeD << endl;
	while (DiscAct != NULL)						//<-- O ponteiro da primeira disciplina para "AntDiscp" e nulo 
	{
		cout << DiscAct->getDisc() << endl;
		DiscAct = DiscAct->getAntDisc();
	}
}

