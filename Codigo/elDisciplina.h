#pragma once
#include "disciplina.h"

class ElDisciplina
{
private:
	Disciplina* Disc;

	ElDisciplina* proxElDisc;
	ElDisciplina* antElDisc;

public:
	ElDisciplina();
	~ElDisciplina();

	void setDisciplina(Disciplina *Dis);
	Disciplina* getDisciplina() const;

	void setProxElDisc(ElDisciplina* proxD);
	ElDisciplina* getProxElDisc() const;

	void setAntElDisc(ElDisciplina* antD);
	ElDisciplina* getAntElDisc() const;
	
	



};

