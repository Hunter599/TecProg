#pragma once
#include "Jogador.h"
#include "Inimigo.h"

using namespace Entidades::Personagens;

namespace Fases
{
    class Fase :
        public Ente
    {
	protected:
		Jogador* pJogador1;

		Inimigo* pInimigo1;
	private:

    };
}