#pragma once
//#include "Jogador.h"
//#include "Inimigo.h"
#include "Inimigo.h"
#include "Jogador.h"

using namespace Entidades::Personagens;


class Jogo
{
private:
	GerenteGrafico* pGerenteGrafico;
	Jogador jogador1;
	Inimigo ini1;

public:
	Jogo();

	void exec();
};

