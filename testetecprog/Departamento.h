#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Disciplina;
class Universidade;

class Departamento
{
private:
    char nome[130];

    Universidade* pUniv;

    Disciplina* pDisciplPrim;
    Disciplina* pDisciplAtual;
    public:
    Departamento();
    ~Departamento();

    void setNome(char* n);
    char* getNome();

    void setUniversidade (Universidade* pUni);
    Universidade* getUniversidade ();

    void incluaDisciplina (Disciplina* pd);
    void listeDisciplinas ();
    void listeDisciplinas2 ();
};
#endif
