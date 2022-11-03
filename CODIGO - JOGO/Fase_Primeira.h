#pragma once
#include "Fase.h"
#include "Inimigo.h"

using namespace Entidades::Personagens;

namespace Fases
{
    class Fase_Primeira :
        public Fase
    {
    private:
    public:
        Inimigo ini1;
        void executar();
        void imprimir();
    };
}