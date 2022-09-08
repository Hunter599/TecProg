#include "elDisciplina.h"

ElDisciplina::ElDisciplina() 
{
	Disc = NULL;
	proxElDisc = NULL;
	antElDisc = NULL;
}
ElDisciplina::~ElDisciplina() 
{
	Disc = NULL;
	proxElDisc = NULL;
	antElDisc = NULL;
}

void ElDisciplina::setDisciplina(Disciplina *Dis) 
{
	if (Dis != nullptr)
		Disc = Dis;
	else
		cout << "Invalid pointer for 'Disciplina' " << endl;
		
}
Disciplina* ElDisciplina::getDisciplina() const  
{
	return Disc;
}

void ElDisciplina::setProxElDisc(ElDisciplina* proxD) 
{
	if (proxElDisc != nullptr)
	proxElDisc = proxD;
}
ElDisciplina* ElDisciplina::getProxElDisc() const 
{
	return proxElDisc;
}

void ElDisciplina::setAntElDisc(ElDisciplina* antD) 
{
	antElDisc = antD;
}
ElDisciplina* ElDisciplina::getAntElDisc() const 
{
	return antElDisc;
}