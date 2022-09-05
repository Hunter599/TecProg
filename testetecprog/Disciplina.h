#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_
#include "Departamento.h"
#include "Aluno.h"
//#include "Principal.h"

class Principal;

class Disciplina
{
private:
    int id;
    char nome[130];
    char area_conhecimento[130];

    Departamento* pDeptoAssociado;
public:
    Disciplina(char* ac);
    Disciplina();
    ~Disciplina();

    Disciplina* pProx;

    void setId(int n);
    int getId();

    void setNome(char* n);
    char* getNome();

    void setDepartamento (Departamento* pDep);
    Departamento* getDepartamento();
};

#endif // _DISCIPLINA_H_
