#include "Jogo.h"

Jogo::Jogo() : window(sf::VideoMode(1000, 1000), "Jogo"),
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

    while (pGerenteGrafico->isWindowOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
			if (event.type == sf::Event::Closed)
				pGerenteGrafico->closeWindow();
        }
		
		//jogador1.setTextura("\assets\textures\astronauta.png");
        jogador1.mover();
		pGerenteGrafico->clear();
		jogador1.imprimir();
		pGerenteGrafico->display();
		//window.clear();
        //jogador1.desenhar();
        //ini1.desenhar();
        //window.display();
    }
}
