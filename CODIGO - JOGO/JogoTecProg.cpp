// JogoTecProg.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "jogo.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Jogo");
    sf::RectangleShape shape(sf::Vector2f(100.f, 200.f));

    sf::Texture textura;

    textura.loadFromFile("astronauta.png");

    sf::Texture* pTextura;

    pTextura = &textura;

    shape.setTexture(pTextura);

    //shape.setFillColor(sf::Color::Red);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            shape.move(sf::Vector2f(0.1f, 0.f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            shape.move(sf::Vector2f(-0.1f, 0.f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            shape.move(sf::Vector2f(0.f, -0.1f));
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            shape.move(sf::Vector2f(0.f, 0.1f));
        }

    }

    return 0;
}