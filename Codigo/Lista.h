#ifndef _LISTA_H_
#define _LISTA_H_
template<class TIPO>


class Lista
{
private:
	Elemento<TIPO>* pPrimeiro;
	Elemento<TIPO>* pAtual;
public:
	Lista ( );
	~Lista ( );
	void inicializa ( );
	void limpar();
	bool incluaElemento ( Elemento<TIPO>* pElemento );
	bool incluaInfo (TIPO* pInfo );
	
	//void listeInfos ( ); Nao e possivel generalizar os algoritmos de listagem
	
	Elemento<TIPO>* getpPrimeiro();
	Elemento<TIPO>* getpAtual();
};

template<class TIPO>
Lista<TIPO>::Lista ( )
{
	pPrimeiro = NULL;
	pAtual = NULL;
}

template<class TIPO>
Lista<TIPO>::~Lista ( )
{
	limpar();
}


template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpPrimeiro()
{
	return pPrimeiro;
}

template<class TIPO>
Elemento<TIPO>* Lista<TIPO>::getpAtual()
{
	return pAtual;
}

template<class TIPO>
void Lista<TIPO>::limpar ( )
{
	Elemento<TIPO>* paux1;
	Elemento<TIPO>* paux2;
	paux1 = pPrimeiro;
	paux2 = paux1;

	while (paux1 != NULL)
	{
		paux2 = paux1->getProximo();
		delete (paux1);
		paux1 = paux2;
	}
	pPrimeiro = NULL;
	pAtual = NULL;
}
