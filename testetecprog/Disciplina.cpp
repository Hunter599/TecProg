#include "Disciplina.h"
//#include "Universidade.h"
//#include "Departamento.h"
#include "Aluno.h"
#include <string.h>

#include <iostream>
using std::cout;
using std::endl;
using namespace std;

//#include "Principal.h"

Disciplina::Disciplina (char* ac, int na)
{
    pDeptoAssociado=NULL;
    pProx=NULL;
    pAntes=NULL;
    pAlunoAtual=NULL;
    pAlunoPrim=NULL;
    cont_alunos=0;
    numero_alunos=0;
    strcpy(area_conhecimento, ac);
}
Disciplina::Disciplina ()
{
    pDeptoAssociado=NULL;
    pProx=NULL;
    pAntes=NULL;
    pAlunoAtual=NULL;
    pAlunoPrim=NULL;
}
Disciplina::~Disciplina ()
{
    pDeptoAssociado=NULL;
    pProx=NULL;
    pAntes=NULL;
    pAlunoAtual=NULL;
    pAlunoPrim=NULL;
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

    pDep->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDeptoAssociado;
}

void Disciplina::incluaAluno (Aluno* pa)
{
    if ((cont_alunos<numero_alunos) && (pa!=NULL))
    {
        if(pAlunoPrim==NULL)
        {
            pAlunoPrim=pa;
            pAlunoAtual=pa;
        } else
        {
            pAlunoAtual->pProx=pa;
            pa->pAntes = pAlunoAtual;
            pAlunoAtual=pa;

        }
        cont_alunos++;
    }
    else
    {
        cout << "Aluno nao incluido" << endl;
    }
}

void Disciplina::listeAlunos ()
{
    Aluno* paux;
    paux = pAlunoPrim;

    while (paux!=NULL)
    {
        cout << "Aluno " << paux->getNome() << " matriculado em " << nome << endl;
        paux=paux->pProx;
    }
}

void Disciplina::listeAlunos2 ()
{
    Aluno* paux;
    paux = pAlunoAtual;

    while (paux!=NULL)
    {
        cout << "Aluno " << paux->getNome() << " matriculado em " << nome << endl;
        paux=paux->pAntes;
    }
}
