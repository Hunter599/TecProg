#pragma once
#include "Personagem.h"

using namespace Personagem;

class Inimigo :
public Personagem
{
private:
public:
	Inimigo();
	~Inimigo();
	void executar();
};