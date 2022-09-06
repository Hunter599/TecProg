#pragma once
#include "aluno.h"

class elAluno 
{
private:
	Aluno* pAluno; 
	Aluno* proxAluno;
	Aluno* antAluno;

public:
	elAluno() ;
	~elAluno();

	void setAluno(Aluno* al);
	char* getNome();
	Aluno* getAluno();

	Aluno* getProxAl();
	Aluno* getAntAl();

	void setProxAl(Aluno* proxAl);
	void setAntAl(Aluno* antAl);
};