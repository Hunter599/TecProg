#include "Professor.h"
#include <iostream>
using std::cout;
using std::endl;

Professor::Professor(int diaNa, int mesNa, int anoNa, char* nome):
    Pessoa (diaNa, mesNa, anoNa, nome)
{
    pUnivFiliado=NULL;
    pDptoFiliado=NULL;
}

Professor::Professor():
Pessoa()
{
    pUnivFiliado=NULL;
    pDptoFiliado=NULL;
}

Professor::~Professor()
{
    pUnivFiliado=NULL;
    pDptoFiliado=NULL;
}

void Professor::setUnivFiliado (Universidade* pu)
{
    pUnivFiliado = pu;
}

void Professor::setDepartamento (Departamento* pdep)
{
    pDptoFiliado = pdep;
}

void Professor::QualDepartamentoTrabalho ()
{
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << pDptoFiliado->getNome() << endl;
}


void Professor::OndeTrabalho ()
{
    cout << nomeP <<" trabalha para a " << pUnivFiliado->getNome() << endl;
}
