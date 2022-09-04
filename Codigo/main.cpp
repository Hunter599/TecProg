

#include "principal.h"

#include <stdio.h>
#include <iostream>
// using namespace std; //using everything with std (standart)

//declaring specific parts that are gonna be used
using std::cout;
using std::endl;

int main(){

    Principal objetoPrincipal;

	objetoPrincipal.inicializaAlunos();
	objetoPrincipal.inicializaProfessores();
    objetoPrincipal.executar();

    return 0;
}
