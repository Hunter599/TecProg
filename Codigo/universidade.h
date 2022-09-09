//#ifndef_UNIVERSIDADE_H_
//#define_UNIVERSIDADE_H_
#pragma once //<-- alternate
//#include "disciplina.h"

#include "departamento.h"
#include "elDepartamento.h"

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


class Universidade{

private:

    char nomeU[30];

    int numero_deps;
	int cont_deps;

    elDepartamento *pElDepPrim;
    elDepartamento *pElDepAtual;

public:

    Universidade(char* nu = (char*)"");
    ~Universidade();

    void setNome(char* nu);
	//void setDpto(Departamento* dpt, int cont);
    char* getNome();

    void incluaDep(Departamento* dep);
    void listeDepsIni();
    void listeDepsFim();
};
//#endif
