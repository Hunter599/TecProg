#include "universidade.h"
#include "elDepartamento.h"

Universidade::Universidade(char* nu){
    Universidade::setNome(nu);
	numero_deps = 45;
	cont_deps = 0;
	pElDepPrim = nullptr;
	pElDepAtual= nullptr;
}

Universidade::~Universidade() {

	elDepartamento *paux1, *paux2;

	paux1 = pElDepPrim;

	while (paux1 != nullptr)
	{
		paux2 = paux1->getProxElDep();
		delete (paux1);
		paux1 = paux2;
	}

	pElDepPrim = nullptr;
	pElDepAtual = nullptr;
}

void Universidade::setNome(char* nu) {
	strcpy_s(nomeU, nu);

}

char* Universidade::getNome(){
    return nomeU;
}

void Universidade::incluaDep(Departamento* dep)
{

	if (cont_deps < numero_deps && dep != nullptr)
	{
		elDepartamento* paux = nullptr;

		paux = new elDepartamento();

		paux->setDep(dep);

		if (pElDepPrim == nullptr)
		{
			pElDepPrim = paux;
			pElDepAtual = paux;
		}
		else
		{
			pElDepAtual->setProxElDep(paux);
			paux->setAntElDep(pElDepAtual);
			pElDepAtual = paux;
		}
		cont_deps++;
	}
	else if (cont_deps > numero_deps)
	{
		cout << "Nao eh possivel adicionar departamento, ha departamentos demais!" << endl;

	}
	else
	{
		//problema: ele entra aqui
		cout << "Error: ponteiro = NULL" << endl;
	}
}

//LISTA DEPARTAMENTOS DESDE O INICIO ATE O FIM
void Universidade::listeDepsIni()
{
	elDepartamento* paux;
	paux = pElDepPrim;

	cout << "Departamentos de " << nomeU << " :" << endl;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getProxElDep();
	}
}

//LISTA DEPARTAMENTOS DESDE O FIM ATE O INICIO 
void Universidade::listeDepsFim()
{
	elDepartamento* paux;
	paux = pElDepAtual;

	cout << "Departamentos de " << nomeU << " :" << endl;

	while (paux != nullptr)
	{
		cout << paux->getNome() << endl;
		paux = paux->getAntElDep();
	}
}