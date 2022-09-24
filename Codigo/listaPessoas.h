#pragma once
#include "Lista.h"
#include "Pessoa.h"

class ListaPessoas
{
private:
	Lista<Pessoa> lsPessoas;

public:
	ListaPessoas();
	~ListaPessoas();


	void limpaLista();

	void incluaPessoa(Pessoa* pP);

	void listarPessoasIn();
	void listarPessoasFim();

	void gravePessoas();
	void recuperePessoas();



};



