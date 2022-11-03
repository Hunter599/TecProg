#include "Jogo.h"
#include "Fase_Primeira.h"

using namespace Fases;

Jogo::Jogo(): 
jogador1(),
pGerenteGrafico()

{
    //jogador1.setWindow(&window);

    //string img1 = "astronauta.png";
    //jogador1.setTextura(img1);

    //ini1.setWindow(&window);
    //exec();
}

void Jogo::exec() 
{
	
	pGerenteGrafico = pGerenteGrafico->getInstance();

	sf::RenderWindow* wind = pGerenteGrafico->getWindow();

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
		//jogador1.setTextura("C:\Users\letic\Desktop\UTFPR\UTFPR - 2022.2\Técnicas de Programação\JOGO\JogoTecProg\assets\textures\astronauta.png"); 
		fase1.ini1.imprimir();
		pGerenteGrafico->display();
		
		//window.clear();
        //jogador1.desenhar();
        //ini1.desenhar();
        //window.display();
    }
}
