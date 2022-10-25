#include "Jogo.h"

Jogo::Jogo() :
	pGerenteGraf()
{
	pGerenteGraf = pGerenteGraf->getInstance();
	
}

Jogo::~Jogo() 
{
	if (pGerenteGraf != NULL) 
	{
		pGerenteGraf->~GerenteGrafico();
	}
}

void Jogo::exec() 
{
	while (pGerenteGraf->isWindowOpen()) 
	{
		pGerenteGraf->updateDeltaTime();
		pGerenteGraf->clear();

		//UPDATE ALL;
		
		pGerenteGraf->display();
	}
}