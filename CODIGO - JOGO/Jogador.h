#pragma once
#include "Personagem.h"
#include <string>
//#include <SFML/Graphics.hpp>
using namespace std;

class Jogador :
    public Personagem
{
private:
	
public:
	Jogador();
    ~Jogador();
    void executar();
    void mover();
};

