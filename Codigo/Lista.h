#ifndef _LISTA_H_
#define _LISTA_H_
#include "Elemento.h"
template<class TIPO>


class Lista
{
private:
	Elemento<TIPO>* pPrimeiro;
	Elemento<TIPO>* pAtual;
public:
	Lista ( );
	~Lista ( );
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

template<class TIPO>
bool Lista<TIPO>::incluaInfo(TIPO *pInfo)
{
	if (NULL != pInfo)
	{
		Elemento<TIPO>* pElemento = NULL;
		pElemento = new Elemento<TIPO>();
		pElemento->setInfo(pInfo);
		incluaElemento(pElemento);
		return true;
	}
	else
	{
		printf("Erro, elemento nulo(a) na lista. \n");
		return false;
	}
}

template<class TIPO>
bool Lista<TIPO>::incluaElemento(Elemento<TIPO>* pElemento)
{
	if (NULL != pElemento)
	{
		if (NULL == pPrimeiro)
		{
			pPrimeiro = pElemento;
			// pPrimeiro->setAnterior ( NULL);
			// pPrimeiro->setProximo ( NULL);
			pAtual = pPrimeiro;
		}
		else
		{
			pElemento->setAnterior(pAtual);
			//pElemento->setProximo ( NULL);
			pAtual->setProximo(pElemento);
			pAtual = pAtual->getProximo();
		}
		return true;
	}
	else
	{
		cout << "Erro, elemento nulo na lista." << endl;
		return false;
	}
}

#endif 