#ifndef _PRINCIPAL_H_
#define _PRINCIPAL_H_

#include "Aluno.h"
#include "Professor.h"
#include "Disciplina.h"

class Principal
{
private:
    Aluno Leticia, Ana, Pedro;

    Professor Einstein, Newton, Simao;

    Universidade UTFPR, Princeton, Cambridge;

    Departamento DAELN, FisicaPrinceton, MatematicaCambridge, DAINF, DAQBI;

    Disciplina Computacao1, Introd_Alg, Computacao2, Metodos2;

    int diaAtual, mesAtual, anoAtual;

public:
    Principal();
    ~Principal();

    void Inicializa();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaProfessores();
    void InicializaAlunos();
    void InicializaDisciplinas();

    void Executar();

    void CalcIdadeProfs();
    void UnivOndesOsProfsTrabalham();
    void DepOndesOsProfsTrabalham();
    void ConhecePessoa();
    void ListeDiscDeptos();
    void ListeAlunosDisc();
};
#endif
