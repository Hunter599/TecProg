#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Universidade;
class Disciplina;
class ListaDisciplinas;


class Departamento{
private:

    char nomeD[30];
	Universidade* uniD;
	ListaDisciplinas *pObjListaDisciplinas;
	
public:

    Departamento(char* nd =(char*)"");
    ~Departamento();

    void setNome(char* nd);
	void setUniAfil(Universidade *unid);
    char* getNome();

	void incluiDisciplina(Disciplina* disc);
	void listeDisciplinasInicio();
	void listeDisciplinasFim();

	

};

#endif
