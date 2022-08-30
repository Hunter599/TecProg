#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_
#include "Pessoa.h"
#include "Departamento.h"
#include "Professor.h"
class Principal
{
private:
    Pessoa Leticia, Ana, Pedro;

    Professor Einstein, Newton, Simao;

    Universidade UTFPR, Princeton, Cambridge;

    Departamento DAELN, FisicaPrinceton, MatematicaCambridge, DAINF, DAQBI;

    int diaAtual, mesAtual, anoAtual;
public:
    Principal();
    ~Principal();
    void Calcular();
};
#endif
