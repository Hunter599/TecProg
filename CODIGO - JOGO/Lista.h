#pragma once


namespace Listas
{
	class Lista
	{

	public:
		template<class TipoE>
		class Elemento
		{
		private: //lista duplamente encadeada
			Elemento* next;
			Elemento* prev;
			TipoE elemento; //conteudo
			bool liberar;

		public:
			Elemento(TipoE elemento, bool liberar = true) :
				elemento(elemento),
				next(nullptr),
				prev(nullptr),
				liberar(true) {};
			~Elemento()
			{
				if (liberar && elemento != nullptr)
					delete elemento;
				next = nullptr;
				prev = nullptr;
				elemento = nullptr;

			}


		};
		//Fim de elemento
		//void setNext(Elemento* next) {}

		//INCLUIR OPERADORES
	};

		

		
	
}