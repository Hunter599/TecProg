#ifndef _ELEMENTO_H_
#define _ELEMENTO_H_
#include <string.h>
#include <iostream> //OLHAR PARA INCLUSAO RECURSIVA UMA VEZ IMPLEMENTADO
using std::cout;
using std::endl;

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
    
    void setAnterior(Elemento<TIPO>* pa);
    Elemento<TIPO>* getAnterior();
    
    void setInfo(TIPO* pInf);
    TIPO* getInfo();
    
    void setNome(char* n);
    char* getNome() const;
    
};

template<class TIPO>

Elemento<TIPO>::Elemento()
{
    pProximo = nullptr;
    pAnterior = nullptr;
    pInfo = nullptr;
    setNome((char*)"");
}

template<class TIPO>
Elemento<TIPO>::~Elemento()
{
    pProximo = nullptr;
    pAnterior = nullptr;
    pInfo = nullptr;
    setNome((char*)"");
}

template<class TIPO>
void Elemento<TIPO>::setProximo(Elemento<TIPO>* pp)
{
    if (pp != nullptr)
    {
        pProximo = pp;
    } else
        cout << "Ponteiro nulo" << endl;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getProximo()
{
    return pProximo;
}

template<class TIPO>
void Elemento<TIPO>::setAnterior(Elemento<TIPO>* pa)
{
    if (pa != nullptr)
    {
        pAnterior = pa;
    } else
        cout << "Ponteiro nulo" << endl;
}

template<class TIPO>
Elemento<TIPO>* Elemento<TIPO>::getAnterior()
{
    return pAnterior;
}

template<class TIPO>
void Elemento<TIPO>::setInfo(TIPO* pInf)
{
    if (pInf != nullptr)
    {
        pInfo = pInf;
    } else
        cout << "Ponteiro nulo" << endl;
}

template<class TIPO>
TIPO* Elemento<TIPO>::getInfo()
{
    return pInfo;
}

template<class TIPO>
void Elemento<TIPO>::setNome(char* n)
{
    strcpy_s(nome, n);
}

template<class TIPO>
char* Elemento<TIPO>::getNome() const
{
    return nome;
}
#endif 