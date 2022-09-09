#include "universidade.h"
#include "elDepartamento.h"
#include "listaDepartamentos.h"

Universidade::Universidade(char* nu)
{
    Universidade::setNome(nu);

	pProx = nullptr;
	pAnte = nullptr;
}

Universidade::~Universidade()
{
	pProx = nullptr;
	pAnte = nullptr;
}

void Universidade::setNome(char* nu) {
	strcpy_s(nomeU, nu);

}

char* Universidade::getNome(){
    return nomeU;
}

void Universidade::setProxUni(Universidade* proxU)
{
	pProx = proxU;
}

void Universidade::setAnteUni(Universidade* anteU)
{
	pAnte = anteU;
}

Universidade* Universidade::getProxUni()
{
	return pProx;
}

Universidade* Universidade::getAnteUni()
{
	return pAnte;
}

void Universidade::incluaDep(Departamento* dep)
{
	ObjLDepartamentos.incluaDep(dep);
}

void Universidade::listeDepsIni()
{
	cout << "Departamentos de " << nomeU << " :" << endl;
	ObjLDepartamentos.listeDepsIni();
}

void Universidade::listeDepsFim()
{
	cout << "Departamentos de " << nomeU << " :" << endl;
	ObjLDepartamentos.listeDepsFim();
}