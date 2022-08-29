
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
    strcpy_s(nome,np);
    uni = NULL;
	dep = NULL;
}

Pessoa::Pessoa()
{
    inicializa(0,0,0);
}

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

void Pessoa::setUniAfil(Universidade *u){
    uni = u;
}

void Pessoa::setDepAfil(Departamento* d) {
	dep = d;
}

char* Pessoa::trabalha(){
    return uni->getNome();

}



