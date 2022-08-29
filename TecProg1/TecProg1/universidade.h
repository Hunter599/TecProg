//#ifndef_UNIVERSIDADE_H_
//#define_UNIVERSIDADE_H_
#pragma once //<-- alternate
//#include "disciplina.h"
#include "departamento.h"

class Universidade{

private:

    char nomeU[30];
	Departamento* dpts[50];
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
