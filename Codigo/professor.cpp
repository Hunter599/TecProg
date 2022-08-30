#include "professor.h"

Professor::Professor(int diaNa, int mesNa, int anoNa, char* na)
{
	Pessoa(diaNa, mesNa, anoNa, na);
	uni = NULL;
	dep = NULL;
}

Professor::Professor() {}

Professor::~Professor() {}


void Professor::setUniAfil(Universidade *u) {
	uni = u;
}

void Professor::setDepAfil(Departamento* d) {
	dep = d;
}

char* Professor::trabalhaUni() {
	return uni->getNome();

}



