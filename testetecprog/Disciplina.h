#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_

#include "Departamento.h"
#include "Aluno.h"

class Principal;

class Disciplina
{
private:
    int id;
    char nome[130];
    char area_conhecimento[130];

    int numero_alunos;
    int cont_alunos;

    Departamento* pDeptoAssociado;

    Aluno *pAlunoPrim;
    Aluno *pAlunoAtual;

public:
    Disciplina(char* ac, int na = 45);
    Disciplina();
    ~Disciplina();

    Disciplina* pProx;
    Disciplina* pAntes;

    void setId(int n);
    int getId();

    void setNome(char* n);
    char* getNome();

    void setDepartamento (Departamento* pDep);
    Departamento* getDepartamento();

    void incluaAluno (Aluno* pa);
    void listeAlunos ();
    void listeAlunos2 ();
};

#endif // _DISCIPLINA_H_
