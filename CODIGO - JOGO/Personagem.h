#pragma once
#include "Entidade.h"
class Personagem :
    public Entidade
{
protected:
    int num_vidas;
public:
    Personagem();
    ~Personagem();
};

