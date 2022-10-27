#pragma once
#include <SFML/Graphics.hpp>

namespace Entidades {
	class Ente
	{
	protected:
		int id;
	public:
		Ente();
		~Ente();
		virtual void executar() = 0;
		void imprimir();

	};

}

