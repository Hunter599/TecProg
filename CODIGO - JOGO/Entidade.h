#pragma once
#include "Ente.h"

namespace Entidades
{ 
	class Entidade : public Ente
	{
	protected:
		int y;
		int x;
	public:
		Entidade();
		~Entidade();
		virtual void executar()=0;
		virtual void imprimir();

	};
}
