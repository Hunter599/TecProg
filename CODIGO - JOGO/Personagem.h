#pragma once
#include "Entidade.h"

namespace Entidades
{
    namespace Personagem
    {
        class Personagem :
            public Entidade
        {
        protected:
            int num_vidas;
        public:
            Personagem();
            ~Personagem();
        };
    }
}