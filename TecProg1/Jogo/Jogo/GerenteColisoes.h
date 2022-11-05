#pragma once

#ifndef GerenteColisoes_hpp
#define GerenteColisoes_hpp

#include "Jogador.h"

using namespace Entidades::Personagens;

namespace Gerenciadores {
	class GerenteColisoes
	{
	private:
		/*Incluir
		-Lista de Personagens
		-Lista de obstaculos*/

	public:
		GerenteColisoes();
		~GerenteColisoes();
		void checkCollision();
	};
}

#endif // !GerenteColisoes_hpp

