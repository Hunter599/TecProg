#pragma once
#include "aluno.h"

class elAluno 
{
private:
	Aluno* pAluno; 
	elAluno* proxAluno;
	elAluno* antAluno;

public:
	elAluno() ;
	~elAluno();

	void setAluno(Aluno* al);
	char* getNome();
	Aluno* getAluno();

	elAluno* getProxElAl();
	elAluno* getAntElAl();

	void setProxAl(elAluno* proxAl);
	void setAntAl(elAluno* antAl);

	
};