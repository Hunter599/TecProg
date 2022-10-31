#pragma once
#include "Ente.h"
using namespace Entidades;

class Entidade : protected Ente
{
protected:
	sf::RectangleShape corpo;
	int y;
	int x;
public:
	Entidade();
	~Entidade();
	virtual void executar()=0;
	virtual void imprimir();
	virtual void setTextura(const char* path);


	sf::RectangleShape* getCorpo();

	

};

