#include "professor.h"

void Professor::setUniAfil(Universidade *u) {
	uni = u;
}

void Professor::setDepAfil(Departamento* d) {
	dep = d;
}

char* Professor::trabalha() {
	return uni->getNome();

}

