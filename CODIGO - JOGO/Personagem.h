#pragma once
#include "Entidade.h"

using namespace Entidades;

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