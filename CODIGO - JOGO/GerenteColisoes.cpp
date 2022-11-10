#include "GerenteColisoes.h"
using namespace Entidades;

namespace Gerenciadores {

	GerenteColisoes::GerenteColisoes() {};
	GerenteColisoes::~GerenteColisoes() {};

	void GerenteColisoes::checkCollision(Entidade* ent1, Entidade* ent2)
	{
		/*
		int x1 = ent1->getPos();
		int x2 = ent2->getPos();
		int dx = abs((x1 + 50)- (x2 + 50))- (50+50);
			*/

		Coord* coord1 = ent1->getCoord();
		Coord* coord2 = ent2->getCoord();
		Coord* tam1 = ent1->getTam();
		Coord* tam2 = ent2->getTam();

		float dx = abs((coord1->getX() + (tam1->getX() / 2)) - (coord2->getX() + (tam2->getX() / 2)) - (tam1->getX() + tam2->getX()));
		float dy = abs((coord1->getY() + (tam1->getY() / 2)) - (coord2->getY() + (tam2->getY() / 2)) - (tam1->getY() + tam2->getY()));

		if (dx < 0.0 || dy < 0.0) 
		{
			exit(1);
		}

	}

}