#include "Pessoa.h"

#include <string.h>

#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, const char nome[])
{
    Inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa ()
{
    Inicializa(0, 0, 0);
}

void Pessoa::Inicializa (int diaNa, int mesNa, int anoNa, const char nome[])
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    strcpy(nomeP, nome);
    idadeP = -1;
}

void Pessoa::Calc_Idade(int diaAT, int mesAT, int anoAT)
{
    idadeP = anoAT - anoP;

    if (mesP > mesAT)
    {
        idadeP--;
    } else if (mesP == mesAT)
    {
        if (diaP > diaAT)
        {
            idadeP--;
        }
    }
    cout << "A idade da pessoa " << nomeP << " seria " << idadeP << endl;
}

int Pessoa::getIdade()
{
    return idadeP;
}

char* Pessoa::getNome ()
{
    return nomeP;
}


void Pessoa::setUnivFiliado (Universidade* pu)
{
    pUnivFiliado = pu;
}

void Pessoa::setDepartamento (Departamento* pdep)
{
    pDptoFiliado = pdep;
}

void Pessoa::QualDepartamentoTrabalho ()
{
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << pDptoFiliado->getNome() << endl;
}


void Pessoa::OndeTrabalho ()
{
    cout << nomeP <<" trabalha para a " << pUnivFiliado->getNome() << endl;
}
