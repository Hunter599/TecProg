#ifndef _ELEMENTO_H_
#define _ELEMENTO_H_
#include <string.h>
#include <iostream> //OLHAR PARA INCLUSAO RECURSIVA UMA VEZ IMPLEMENTADO

template<class TIPO>

class Elemento
{
private:
    Elemento<TIPO>* pProximo;
    Elemento<TIPO>* pAnterior;
    TIPO* pInfo;                //Ponteiro da clase <TIPO> ex: elAluno, elDepartamento
    char nome[150];
    
public:
    Elemento();
    ~Elemento();
    
    void setProximo(Elemento<TIPO>* pp);
    Elemento<TIPO>* getProximo();
    
    void setAnt(Elemento<TIPO>* pa);
    Elemento<TIPO>* getAnterior();
    
    void setInfo(TIPO* pInf);
    TIPO* getInfo();
    
    void setNome(char* n = "");
    char* getNome();
    
}

template <class TIPO>

Elemento<TIPO>::Elemento()
{
    pProximo = nullptr;
    pAnterior = nullptr;
    pInf = nullptr;
    setNome();
}

Elemento<TIPO>::~Elemento()
{
    pProximo = nullptr;
    pAnterior = nullptr;
    pInf = nullptr;
    setNome();
}


void Elemento<TIPO>::setProximo(Elemento<TIPO>* pp)
{
    if (pp != nullptr)
    {
        pProximo = pp;
    } else
        cout << "Ponteiro nulo" << endl;
}

Elemento<TIPO>* Elemento<TIPO>::getProximo()
{
    return pProximo;
}


void Elemento<TIPO>::setAnt(Elemento<TIPO>* pa)
{
    if (pa != nullptr)
    {
        pAnterior = pa;
    } else
        cout << "Ponteiro nulo" << endl;
}

Elemento<TIPO>* Elemento<TIPO>::getAnterior()
{
    return pAnterior;
}


void Elemento<TIPO>::setInfo(TIPO* pInf)
{
    if (pInf != nullptr)
    {
        pInfo = pInf;
    } else
        cout << "Ponteiro nulo" << endl;
}
TIPO* Elemento<TIPO>::getInfo()
{
    return pInfo;
}


void Elemento<TIPO>::setNome(char* n)
{
    strcpy(nome, n);
}

char* Elemento<TIPO>::getNome()
{
    return nome;
}
