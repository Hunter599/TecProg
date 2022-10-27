#pragma once
#include "Ente.h"
using namespace Entidades;

class Entidade : protected Ente
{
protected:
	sf::RenderWindow* janela;
	sf::RectangleShape corpo;
	int y;
	int x;
public:
	Entidade();
	~Entidade();
	virtual void executar()=0;
	void setWindow(sf::RenderWindow* jan)
	{
		this->janela = jan;
	}
	void desenhar()
	{
		janela->draw(corpo);
	}

};

