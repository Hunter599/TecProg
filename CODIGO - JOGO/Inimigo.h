#pragma once
#include "Personagem.h"

namespace Entidades
{
	namespace Personagens
	{
		class Inimigo :
			public Personagem
		{
		private:
		public:
			Inimigo();
			~Inimigo();
			void executar();
		};
	}
}