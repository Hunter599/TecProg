#include "Jogo.h"
#include "Fase_Primeira.h"

using namespace Fases;

Jogo::Jogo(): 
jogador1(),
pGerenteGrafico()

{

}

void Jogo::exec() 
{
	
	pGerenteGrafico = pGerenteGrafico->getInstance();
	//jogador1.setTextura("..\TecProg1\Jogo\Jogo\astronauta.png");

    while (pGerenteGrafico->isWindowOpen())
    {
        sf::Event event;
        while (pGerenteGrafico->getWindow()->pollEvent(event))
        {
			if (event.type == sf::Event::Closed)
				pGerenteGrafico->closeWindow();
        }
		
		pGerenteGrafico->clear();
		jogador1.executar();	
		ini1.executar();
		//fase1.ini1.imprimir();
		pGerenteGrafico->display();
		
		//window.clear();
        //jogador1.desenhar();
        //ini1.desenhar();
        //window.display();
    }
}

/*Jogo::~Jogo() 
{
	pGerenteGrafico->~GerenteGrafico();
	jogador1.~Jogador();
}*/