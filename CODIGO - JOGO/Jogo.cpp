#include "Jogo.h"

Jogo::Jogo() : window(sf::VideoMode(1000, 1000), "Jogo")
{
    jogador1.setWindow(&window);
    string img1 = "astronauta.png";
    jogador1.setTextura(img1);

    ini1.setWindow(&window);
    exec();
}

void Jogo::exec()
{
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        jogador1.mover();
        window.clear();
        jogador1.desenhar();
        ini1.desenhar();
        window.display();
    }
}
