#include "elDepartamento.h"

//contrutora - inicializa
elDepartamento::elDepartamento()
{
	pDepartamento = nullptr;
	proxDep = nullptr;
	antDep = nullptr;
}

//destrutora
elDepartamento::~elDepartamento()
{
	pDepartamento = nullptr;
	proxDep = nullptr;
	antDep = nullptr;
}

char* elDepartamento::getNome()
{
	return pDepartamento->getNome();
}

void elDepartamento::setDep(Departamento* dep)
{
	if (dep != nullptr)
	{
		pDepartamento = dep;
	}
}

Departamento* elDepartamento::getDep()
{
	return pDepartamento;
}

void elDepartamento::setProxElDep(elDepartamento* proxD)
{
	proxDep = proxD;
}

void elDepartamento::setAntElDep(elDepartamento* antD)
{
	antDep = antD;
}


elDepartamento* elDepartamento::getProxElDep()
{
	return proxDep;
}

elDepartamento* elDepartamento::getAntElDep()
{
	return antDep;
}