#pragma once
#include "Personagem.h"
#include <string>
#include <SFML/Graphics.hpp>
using namespace std;

class Jogador :
    public Personagem
{
private:
public:
    Jogador();
    ~Jogador();
    void setTextura(string img);
    void executar();
    void mover();
};

