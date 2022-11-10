#include "Jogo.h"
#include "Fase_Primeira.h"

using namespace Fases;
using namespace Entidades::Personagens;

Jogo::Jogo(): 
jogador1(),
pGerenteGrafico()

{
	Fase_Primeira fase1;
}

void Jogo::exec() 
{
	
	pGerenteGrafico = pGerenteGrafico->getInstance();
	jogador1.setTextura("astronauta.png");
	//TESTE
	fase1.setSize(pGerenteGrafico->getWindowSize().x, pGerenteGrafico->getWindowSize().y);
	
	fase1.setTextura("backtest2.png");
	

	//TESTE
    while (pGerenteGrafico->isWindowOpen())
    {
        sf::Event event;
        while (pGerenteGrafico->getWindow()->pollEvent(event))
        {
			if (event.type == sf::Event::Closed)
				pGerenteGrafico->closeWindow();
        }

		
		fase1.executar();
		pGerenteGrafico->clear();

		
		execEnt();

		fase1.imprimir();
		jogador1.executar();	
		ini1.executar();
		fase1.robo1.executar();


		//TESTE
		Robo* rob = &fase1.robo1;
		
		//TESTE

		fase1.alien1.executar();
		
		//fase1.ini1.imprimir();
		pGerenteGrafico->display();
		
		
		//window.clear();
        //jogador1.desenhar();
        //ini1.desenhar();
        //window.display();
    }
}

void Jogo::execEnt()
{
	jogador1.executar();
	ini1.executar();
	//fase1.espi1.executar();
	fase1.rocha1.executar();
	fase1.robo1.executar();
	fase1.chao.executar();
}

/*Jogo::~Jogo() 
{
	pGerenteGrafico->~GerenteGrafico();
	jogador1.~Jogador();
}*/