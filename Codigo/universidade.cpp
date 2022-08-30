
#include "universidade.h"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

void Universidade::setNome(char* nu) {
	strcpy_s(nomeU, nu);
}

Universidade::Universidade(char* nu){
    Universidade::setNome(nu);
	cont = 0;
	int i;
	for (i = 0; i < 50; i++) 
	{
		dpts[i] = NULL;
	}
}

Universidade::~Universidade() {
}


char* Universidade::getNome(){
    return nomeU;
}

void Universidade::setDpto(Departamento* dpt) {
	dpts[cont] = dpt;	
	cont++;
}

void Universidade::showDpts() 
{
	int i = 0;

	cout << "Departamentos da " << nomeU << endl;
	while (dpts[i] != NULL) 
	{
		cout << i+1 <<" - "<< dpts[i]->getNome() << endl;
		i++;
	}
}
