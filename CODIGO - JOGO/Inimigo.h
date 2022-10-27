#pragma once
#include "Personagem.h"
class Inimigo :
    public Personagem
{
private:
public:
    Inimigo();
    ~Inimigo();
    void executar();
};

