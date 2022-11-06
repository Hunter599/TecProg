#pragma once
#include "Fase.h"
#include "Lista.h"
#include "ListaEntidades.h"
#include "Lista.h"
#include "Inimigo.h"
#include "Robo.h"
#include "Alienigena.h"
using namespace Entidades::Personagens;

namespace Fases
{
    class Fase_Primeira :
        public Fase
    {
    private:
    public:
        Fase_Primeira();
        ~Fase_Primeira();
        Robo robo1;
        Alienigena alien1;
        void executar();
        void imprimir();
    };
}