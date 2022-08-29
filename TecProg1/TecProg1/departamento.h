#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_

#include "disciplina.h"
#include <list>

using std::list;

class Universidade;

class Departamento{
private:

    char nomeD[30];
	Universidade* uniD;
	list<Disciplina*> lDiscp;


public:

    Departamento(char* nd =(char*)"");
    ~Departamento();

    void setNome(char* nd);
	void setUniAffil(Universidade *unid);
    char* getNome();
};

#endif
