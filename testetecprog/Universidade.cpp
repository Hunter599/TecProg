#include "Universidade.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

Universidade::Universidade ()
{
   // strcpy ( nome, n );
}

Universidade::~Universidade ( )
{
}

void Universidade::setNome ( char* n )
{
    strcpy (nome, n);
}

char* Universidade::getNome ( )
{
    return nome;
}

void Universidade::setDepartamento (Departamento* pdep)
{
    LpDptos.push_back(pdep);
}

void Universidade::imprimeDptos()
{
    list <Departamento*>::iterator iterador;

    for (iterador=LpDptos.begin();iterador!=LpDptos.end();iterador++)
    {
        cout << (*iterador)->getNome() << endl;
    }
}
