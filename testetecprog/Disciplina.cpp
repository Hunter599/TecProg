#include "Disciplina.h"
#include "Universidade.h"
#include <string.h>
#include "Departamento.h"

Disciplina::Disciplina (char* ac)
{
    pDeptoAssociado=NULL;
    pProx=NULL;

    strcpy(area_conhecimento, ac);
}
Disciplina::~Disciplina ()
{
    pDeptoAssociado=NULL;
    pProx=NULL;
}

void Disciplina::setId(int n)
{
    id=n;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(char* n)
{
    strcpy (nome, n);
}

char* Disciplina::getNome ()
{
    return nome;
}

void Disciplina::setDepartamento (Departamento* pDep)
{
    pDeptoAssociado=pDep;
}

Departamento* Disciplina::getDepartamento()
{
    return pDeptoAssociado;
}
