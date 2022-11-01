#pragma once
#include "Personagem.h"

namespace Entidades
{
	namespace Personagem
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