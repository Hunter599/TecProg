#ifndef _PESSOA_H_
#define _PESSOA_H_
#include "Universidade.h"
#include <stdio.h>

class Pessoa
{
protected:
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP [30];

    Universidade* pUnivFiliado;
    Departamento* pDptoFiliado;

public:
    Pessoa (int diaNa, int mesNa, int anoNa, const char nome[]="");

    Pessoa ();

    void Inicializa (int diaNa=0, int mesNa=0, int anoNa=0, const char nome[]="");
    void Calc_Idade (int diaAT, int mesAT, int anoAT);
    int getIdade();
    void setUnivFiliado (Universidade* pu);
    void setDepartamento (Departamento* pdep);
    void OndeTrabalho ();
    void QualDepartamentoTrabalho ();

};
#endif
