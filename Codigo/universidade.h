//#ifndef_UNIVERSIDADE_H_
//#define_UNIVERSIDADE_H_
#pragma once //<-- alternate
//#include "disciplina.h"
#include "departamento.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;


class Universidade{

private:

    char nomeU[30];
	
	int cont;
    //Disciplina


public:

    Universidade(char* nu = (char*)"");
    ~Universidade();

    void setNome(char* nu);
	void setDpto(Departamento* dpt);
    char* getNome();
	void showDpts();

};
//#endif
