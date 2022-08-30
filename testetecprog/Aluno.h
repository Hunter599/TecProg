#ifndef _ALUNO_H_
#define _ALUNO_H_

#include "Pessoa.h"

class Aluno: public Pessoa
{
private:
    int ra;

public:
    Aluno(int diaNa, int mesNa, int anoNa, char* nome = "", int i=-1);
    Aluno();
    ~Aluno();

    void setRA(int ra);
    int getRA();
};

#endif
