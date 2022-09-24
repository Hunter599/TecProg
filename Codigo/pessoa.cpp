
#include <stdio.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


#include "pessoa.h"
#include "universidade.h"

void Pessoa::inicializa(int dp, int mp, int ap,  char* np){

    diaP = dp;
    mesP = mp;
    anoP= ap;
    idade = -1;
	id = -1;
    strcpy_s(nome,np);
}

void Pessoa::setId(int i)
{
	id = i;
}


Pessoa::Pessoa(int diaNa, int mesNa, int anoNa, char* na)
{
	inicializa(diaNa, mesNa, anoNa, na);
}

Pessoa::Pessoa(){}

Pessoa::~Pessoa(){}



void Pessoa::calcIdade(int d, int m, int a)
{

	idade = a - anoP;

    if (m <= mesP)
    {
        if (d < diaP)
        {
            idade -=1;

        }

    }
}

int Pessoa::informaIdade()
{
    return idade;
}

void Pessoa::showIdade()
{
    cout << "A idade de "<< nome << " seria " << idade << " anos"<< endl;
}

void Pessoa::setNome(char* n) 
{
	strcpy_s(nome, n);
}

char* Pessoa::getNome() 
{
	return nome;
}


