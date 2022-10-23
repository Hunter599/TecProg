#pragma once
#include <SFML/Graphics.hpp>

class ente
{
protected:
	int id;
public:
	ente();
	~ente();
	virtual void executar() = 0;
	void imprimir();

};

