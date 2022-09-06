#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "Pessoa.h"

class Aluno: public Pessoa
{
private:
    int ra;

public:

    Aluno *pProx;
    Aluno *pAntes;

    Aluno(int diaNa, int mesNa, int anoNa, char* nome="", int i=-1);
    Aluno();
    ~Aluno();

    void setRA(int n_ra);
    int getRA();
};

#endif
