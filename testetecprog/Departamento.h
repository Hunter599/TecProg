#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

class Universidade;

class Departamento
{
private:
    char nome[130];
    public:
    Departamento();
    ~Departamento();
    void setNome(char* n);
    char* getNome();
    void setUniversidade (Universidade* pUniv);
};
#endif
