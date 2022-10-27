#include "Jogador.h"

Jogador::Jogador()
{
    corpo.setSize(sf::Vector2f(100.f, 200.f));
}

Jogador::~Jogador()
{
}

void Jogador::setTextura(string img)
{
    sf::Texture textura;
    corpo.setFillColor(sf::Color::Green);

    textura.loadFromFile(img);

    sf::Texture* pTextura;

    pTextura = &textura;

    corpo.setTexture(pTextura);
}

void Jogador::executar()
{
    mover();
}

void Jogador::mover()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        corpo.move(sf::Vector2f(0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        corpo.move(sf::Vector2f(-0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    {
        corpo.move(sf::Vector2f(0.f, -0.1f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    {
        corpo.move(sf::Vector2f(0.f, 0.1f));
    }
}
