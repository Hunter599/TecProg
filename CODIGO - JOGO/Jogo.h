#pragma once
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "Inimigo.h"
class Jogo
{
private:
	GerenteGrafico* pGerenteGrafico;
	sf::RenderWindow window;
	Jogador jogador1;
	Inimigo ini1;

public:
	Jogo();

	void exec();
};

