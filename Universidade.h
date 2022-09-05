#ifndef _UNIVERSIDADE_H_
#define _UNIVERSIDADE_H_
#include "Departamento.h"
#include <list>
using namespace std;

class Universidade
{
private:
    char nome[130];
    list <Departamento*> LpDptos;
    int ctd;
public:
    Universidade();
    ~Universidade();
    void setNome(char* n);
    char* getNome();
    void setDepartamento(Departamento* pdep);
    void imprimeDptos();
};
#endif
