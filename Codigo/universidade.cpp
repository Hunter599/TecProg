
#include "universidade.h"


void Universidade::setNome(char* nu) {
	strcpy_s(nomeU, nu);

}

Universidade::Universidade(char* nu){
    Universidade::setNome(nu);
	cont = 0;
}

Universidade::~Universidade() {
}


char* Universidade::getNome(){
    return nomeU;
}

void Universidade::setDpto(Departamento* dpt) {}

void Universidade::showDpts() 
{}
