#include "departamento.h"
#include "universidade.h"
#include "listaDisciplinas.h"





Departamento::Departamento(char* nd){
    strcpy_s(nomeD, nd);
	uniD = nullptr;
	pObjListaDisciplinas = new ListaDisciplinas;

}

Departamento::~Departamento(){
	
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
	pObjListaDisciplinas->incluaDisciplina(disc);
}
//LISTA DISCIPLINAS DESDE O INICIO ATE O FIM
void Departamento::listeDisciplinasInicio() 
{
	cout << "Disciplinas de " <<nomeD << " :" << endl;
	pObjListaDisciplinas->listarDisciplinasInicio();
	
}

//LISTA DISCIPLINAS DESDE O FIM ATE O INICIO 
void Departamento::listeDisciplinasFim() 
{
	cout << "Disciplinas de " << nomeD << " :" << endl;
	pObjListaDisciplinas->listarDisciplinasFim();
}

