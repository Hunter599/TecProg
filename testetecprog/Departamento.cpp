#include "Departamento.h"

//#include "Universidade.h"
#include "Disciplina.h"

#include <string.h>

#include <iostream>
using std::cout;
using std::endl;
using namespace std;

Departamento::Departamento ()
{
    pDisciplPrim=NULL;
    pDisciplAtual=NULL;
}

Departamento::~Departamento ()
{
    pDisciplPrim=NULL;
    pDisciplAtual=NULL;
}

void Departamento::setNome ( char* n )
{
    strcpy (nome, n);
}

char* Departamento::getNome ( )
{
    return nome;
}

void Departamento::setUniversidade (Universidade* pUni)
{
    pUniv=pUni;
}

Universidade* Departamento::getUniversidade ()
{
    return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pd)
{
    if(pDisciplPrim==NULL)
    {
        pDisciplPrim=pd;
        pDisciplAtual=pd;
    }
    else
    {
        pDisciplAtual->pProx=pd;
        pd->pAntes=pDisciplAtual;
        pDisciplAtual=pd;
    }
}

void Departamento::listeDisciplinas()
{
    Disciplina* pAux;

    pAux=pDisciplPrim;

    while (pAux!=NULL)
    {
        cout << "A disciplina " << pAux->getNome() << "pertence ao Departamento " << nome << endl;
        pAux = pAux->pProx;
    }
}

void Departamento::listeDisciplinas2()
{
    Disciplina* pAux;

    pAux=pDisciplAtual;

    while (pAux!=NULL)
    {
        cout << "A disciplina " << pAux->getNome() << "pertence ao Departamento " << nome << endl;
        pAux = pAux->pAntes;
    }
}
