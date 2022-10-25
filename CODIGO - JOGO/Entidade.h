#pragma once
#include "Ente.h"

class Entidade : protected Ente
{
protected:
	int y;
	int x;
public:
	Entidade();
	~Entidade();
	virtual void executar()=0;

};

