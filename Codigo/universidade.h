//#ifndef_UNIVERSIDADE_H_
//#define_UNIVERSIDADE_H_
#pragma once //<-- alternate

#include "listaDepartamentos.h"
#include "departamento.h"
#include "elDepartamento.h"

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


class Universidade{

private:

    char nomeU[30];

    ListaDepartamentos ObjLDepartamentos;

    Universidade *pProx;
    Universidade *pAnte;

public:

    Universidade(char* nu = (char*)"");
    ~Universidade();

    void setNome(char* nu);
    char* getNome();

    void setProxUni(Universidade* proxU);
    void setAnteUni(Universidade* anteU);

    Universidade* getProxUni();
    Universidade* getAnteUni();

    void incluaDep(Departamento* dep);
    void listeDepsIni();
    void listeDepsFim();
};
//#endif
