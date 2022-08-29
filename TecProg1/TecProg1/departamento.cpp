#include "universidade.h"
#include "departamento.h"
#include <string.h>

Departamento::Departamento(char* nd){
    strcpy_s(nomeD, nd);
}

Departamento::~Departamento(){
}

void Departamento::setNome(char* nd){
    strcpy_s(nomeD,nd);
}

char* Departamento::getNome(){
    return nomeD;
}

void Departamento::setUniAffil(Universidade *unid) 
{
	uniD = unid;
}
