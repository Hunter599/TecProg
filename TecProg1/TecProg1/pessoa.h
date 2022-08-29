#ifndef _PESSOA_H_
#define _PESSOA_H_


#include "universidade.h"
#include "departamento.h"
class Pessoa
{
    //ATRIBUTOS - ATTRIBUTES
private:
    int diaP;
    int mesP;
    int anoP;
    int idade;
    char nome[30];
    Universidade *uni;
    Departamento *dep;


    //METODOS - METHODS
public:

    Pessoa();
    ~Pessoa();

    void inicializa(int dp, int mp, int ap, char* np= (char*)"");

    void calcIdade(int d, int m, int a);
    void showIdade();
    int informaIdade();

    void setUniAfil(Universidade *u);
	void setDepAfil(Departamento *d);
    char* trabalha();

    






};


#endif
