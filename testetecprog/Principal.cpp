#include "Principal.h"
//#include "Departamento.h"
//#include "Disciplina.h"

#include <time.h>

#include <iostream>
using std::cout;
using std::endl;
using namespace std;

Principal::Principal():
    Einstein(),
    Newton(),
    Simao()
    //Leticia()
    //Ana(),
    //Pedro()
{

    /*Leticia.Inicializa(18, 5, 2004, "Leticia Walger Amaro");
    Ana.Inicializa(1, 2, 2003, "Ana");
    Pedro.Inicializa(11, 4, 1999, "Pedro");

    Leticia.setUnivFiliado(&UTFPR);
    Ana.setUnivFiliado(&UTFPR);
    Pedro.setUnivFiliado(&UTFPR);

    Leticia.setDepartamento(&DAINF);
    Ana.setDepartamento(&DAQBI);
    Pedro.setDepartamento(&DAQBI);*/

    ///Leitura da data atual

    // O ponteiro 'local' é do tipo struct tm, que contém data e hora.
    struct tm *local;
    time_t segundos;
    time(&segundos);
    local = localtime(&segundos);
    // Retorna o dia.
    diaAtual = local->tm_mday;
    // Retorna o mês.
    mesAtual = local->tm_mon + 1;
    // Retorna o ano.
    // É necessário acrescentar 1900, pois o sistema retorna a partir desse ano.
    // Exemplo: Ao invés de 2009, retorna 109.
    anoAtual = local->tm_year + 1900;

    ///Codigo para digitar manualmente:
    /*cout << "Digite o dia atual: " << endl;
    cin >> diaAtual;
    cout << "Digite o mes atual: " << endl;
    cin >> mesAtual;
    cout << "Digite o ano atual: " << endl;
    cin >> anoAtual;*/

    Inicializa();

    Executar();

}

Principal::~Principal()
{
}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaProfessores();
    InicializaDisciplinas();
}

void Principal::InicializaUniversidades()
{
    UTFPR.setNome ("UTFPR");
    Princeton.setNome ("Princeton");
    Cambridge.setNome ("Cambridge");
}

void Principal::InicializaDepartamentos()
{
    DAELN.setNome ("Eletronica");
    FisicaPrinceton.setNome ("Fisica");
    MatematicaCambridge.setNome ("Matematica");
    DAINF.setNome ("Informatica");
    DAQBI.setNome ("Quimica");

    UTFPR.setDepartamento (&DAELN);
    UTFPR.setDepartamento (&DAINF);
    UTFPR.setDepartamento (&DAQBI);
    Princeton.setDepartamento (&FisicaPrinceton);
    Cambridge.setDepartamento (&MatematicaCambridge);

    DAELN.setUniversidade (&UTFPR);
    DAINF.setUniversidade (&UTFPR);
    DAQBI.setUniversidade (&UTFPR);
    FisicaPrinceton.setUniversidade (&Princeton);
    MatematicaCambridge.setUniversidade (&Cambridge);
}

void Principal::InicializaProfessores()
{
    Einstein.Inicializa(14, 3, 1879, "Albert Einstein");
    Newton.Inicializa(4, 1, 1643, "Isaac Newton");
    Simao.Inicializa(3, 10, 1976, "Jean Simao");

    Simao.setUnivFiliado(&UTFPR);
    Einstein.setUnivFiliado(&Princeton);
    Newton.setUnivFiliado(&Cambridge);

    Simao.setDepartamento(&DAELN);
    Einstein.setDepartamento(&FisicaPrinceton);
    Newton.setDepartamento(&MatematicaCambridge);
}

void Principal::InicializaAlunos()
{
    Leticia.Inicializa(18, 5, 2004, "Leticia Walger Amaro");
    Ana.Inicializa(21, 9, 2000, "Ana B.");
    Pedro.Inicializa(10, 1, 2003, "Pedro C.");

    Leticia.setRA(2469847);
    Ana.setRA(1101111);
    Leticia.setRA(2222223);
}

void Principal::InicializaDisciplinas()
{
    Computacao1.setNome("Computacao I 2006");
    Introd_Alg.setNome("Intro de Alg de Programacao 2007");
    Computacao2.setNome("Computacao II 2007");
    Metodos2.setNome("Metodos II");

    Computacao1.setDepartamento(&DAELN);
    Introd_Alg.setDepartamento(&DAELN);
    Computacao2.setDepartamento(&DAELN);
    Metodos2.setDepartamento(&DAELN);

    Computacao1.incluaAluno(&Leticia);
    Computacao1.incluaAluno(&Ana);
    Computacao1.incluaAluno(&Pedro);

}

void Principal::CalcIdadeProfs()
{
    Simao.Calc_Idade (diaAtual, mesAtual, anoAtual);
    Einstein.Calc_Idade (diaAtual, mesAtual, anoAtual);
    Newton.Calc_Idade (diaAtual, mesAtual, anoAtual);
}

void Principal::UnivOndesOsProfsTrabalham()
{
    Simao.OndeTrabalho();
    Einstein.OndeTrabalho();
    Newton.OndeTrabalho();
}

void Principal::DepOndesOsProfsTrabalham()
{
    Simao.QualDepartamentoTrabalho ();
    Einstein.QualDepartamentoTrabalho ();
    Newton.QualDepartamentoTrabalho ();
}

void Principal::ListeDiscDeptos()
{
    DAELN.listeDisciplinas();

    cout << endl;
}

void Principal::ListeAlunosDisc()
{
    Computacao1.listeAlunos();
    cout << endl;

    Computacao1.listeAlunos2();
    cout << endl;
}

void Principal::Executar()
{
    CalcIdadeProfs();

    cout << endl;

    UnivOndesOsProfsTrabalham();

    cout << endl;

    DepOndesOsProfsTrabalham();

}
