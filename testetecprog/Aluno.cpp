#include "Aluno.h"

Aluno::Aluno(int diaNa, int mesNa, int anoNa, char* nome, int i):
    Pessoa (diaNa, mesNa, anoNa, nome)
{
    ra=i;

    pProx=NULL;
    pAntes=NULL;
}

Aluno::Aluno()
{
    pProx=NULL;
    pAntes=NULL;
}

Aluno::~Aluno()
{
    pProx=NULL;
    pAntes=NULL;
}

void Aluno::setRA (int n_ra)
{
    ra=n_ra;
}

int Aluno::getRA ()
{
    return ra;
}
