#include "Jogo.h"

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
		//jogador1.setTextura("Users\bruno\OneDrive\Documents\GitHub\TecProg\TecProg1\Jogo\assets\textures");
		ini1.imprimir();
		pGerenteGrafico->display();
		
		//window.clear();
        //jogador1.desenhar();
        //ini1.desenhar();
        //window.display();
    }
}
