#pragma once
#include "GerenteGrafico.h"
using Gerenciadores::GerenteGrafico; 

class Jogo
{
private:
	GerenteGrafico* pGerenteGraf;
	
public:
	Jogo();
	~Jogo();
	void exec();
};

