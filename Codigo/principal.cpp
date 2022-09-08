

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "principal.h"

Principal::Principal():
	Einstein(),
	Newton(),
	Barreto(),
	Valfredo(),

	Bruno(),
	Gab(),
	Sam(),
	Rodrigo(),
	Lucas(),


	Cambridge(),
	Princeton(),
	UTFPR(),

	FisicaCambridge(),
	FisicaPrinceton(),
	DAFIS(),
	DAINF(),
	
	TecProg(),
	FundProg(),
	FisTeo(),
	IntroLog(),

	ListaAlunos(),
	ListaDisciplinas()

{
    diaAtual=-1;
    mesAtual=-1;
    anoAtual=-1; 

	Cambridge.setDpto(&FisicaCambridge);
	Princeton.setDpto(&FisicaPrinceton);
	UTFPR.setDpto(&DAFIS);
	UTFPR.setDpto(&DAINF);

	//AFILIAR DEPARTAMENTOS A UNIVERSIDADES

	Einstein.setUniAfil(&Cambridge);
	Newton.setUniAfil(&Princeton);
	Einstein.setDepAfil(&FisicaCambridge);
	Newton.setDepAfil(&FisicaPrinceton);

	TecProg.setDepAfil(&DAINF);
	FundProg.setDepAfil(&DAINF);
	IntroLog.setDepAfil(&DAINF);
	FisTeo.setDepAfil(&DAFIS);

}

Principal::~Principal() {
}

void Principal::inicializaObjs() 
{
	inicializaAlunos();
	inicializaProfessores();
	inicializaUniversidades();
	inicializaDepartamentos();
	inicializaDisciplinas();
	inicializaListas();
}

void Principal::inicializaAlunos() 
{
	Bruno.inicializa(29, 1, 2003, (char*)"Bruno");
	Bruno.setRa(001);
	Gab.inicializa(15, 5, 2004, (char*)"Gabi");
	Gab.setRa(002);
	Sam.inicializa(3, 1, 1999, (char*)"Samara");
	Sam.setRa(003);
	Rodrigo.inicializa(6, 9, 2002, (char*)"Rodrigo"); ;
	Rodrigo.setRa(004);
	Lucas.inicializa(9, 8, 2004, (char*)"Lucas");
	Lucas.setRa(005);
}

void Principal::inicializaUniversidades() 
{
	Cambridge.setNome((char*)"Cambridge");
	Princeton.setNome((char*)"Princeton");
	UTFPR.setNome((char*)"UTFPR");
}

void Principal::inicializaDepartamentos() 
{
	FisicaCambridge.setNome((char*)"Fisica Cambridge");
	FisicaPrinceton.setNome((char*)"Fisica Princeton");
	DAFIS.setNome((char*)"DAFIS UTFPR");
	DAINF.setNome((char*)"DAINF UTFPR");
}

void Principal::inicializaDisciplinas() 
{
	TecProg.setDisc((char*)"Tecnicas de Programacao");
	FisTeo.setDisc((char*)"Fisica Teorica");
	FundProg.setDisc((char*)"Fundamentos de Programacao");
	IntroLog.setDisc((char*)"Introducao a Logica");

	
}

void Principal::inicializaProfessores()
{
	Einstein.inicializa(14, 3, 1879, (char*)"Einstein");
	Newton.inicializa(4, 1, 1643, (char*)"Newton");
}

void Principal::inicializaListas() 
{
	ListaAlunos.setNomeLista((char*)"Lista de Alunos");
	ListaDisciplinas.setNomeLista((char*)"Lista de Disciplinas");

	TecProg.incluiAluno(&Bruno);
	TecProg.incluiAluno(&Gab);
	TecProg.incluiAluno(&Rodrigo);

	FisTeo.incluiAluno(&Bruno);
	FisTeo.incluiAluno(&Lucas);
	FisTeo.incluiAluno(&Rodrigo);

	FundProg.incluiAluno(&Bruno);
	FundProg.incluiAluno(&Sam);
	FundProg.incluiAluno(&Rodrigo);

	IntroLog.incluiAluno(&Sam);
	IntroLog.incluiAluno(&Gab);

	DAFIS.incluiDisciplina(&FisTeo);
	DAINF.incluiDisciplina(&FundProg);
	DAINF.incluiDisciplina(&TecProg);
	DAINF.incluiDisciplina(&IntroLog);
}

void Principal::calcIdades(int dAtual, int mAtual, int aAtual)
{
	Einstein.calcIdade(dAtual, mAtual, aAtual);
	Newton.calcIdade(dAtual, mAtual, aAtual);
	Bruno.calcIdade(dAtual, mAtual, aAtual);
	Rodrigo.calcIdade(dAtual, mAtual, aAtual);
	Lucas.calcIdade(dAtual, mAtual, aAtual);
	Sam.calcIdade(dAtual, mAtual, aAtual);
	Gab.calcIdade(dAtual, mAtual, aAtual);
}

void Principal::executar(){

    cout<< "Digite dia, mes e ano"<< endl;
    cin >> diaAtual >> mesAtual >> anoAtual;

    
	
    Einstein.trabalhaUni();
    Newton.trabalhaUni();

	calcIdades(diaAtual, mesAtual, anoAtual);

    Einstein.showIdade();
    Newton.showIdade();
	Bruno.showIdade();
	Rodrigo.showIdade();
	Lucas.showIdade();
	Sam.showIdade();
	Gab.showIdade();

	TecProg.listeAlunosInicio();
	FisTeo.listeAlunosInicio();
	FundProg.listeAlunosInicio();
	IntroLog.listeAlunosInicio();

	DAFIS.listeDisciplinasInicio();
	DAINF.listeDisciplinasInicio();


	//UTFPR.showDpts();
	//DAFIS.listeDisciplinasInicio();
	//DAINF.listeDisciplinasInicio();

}
