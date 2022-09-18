
#include "pessoa.h"
#include "universidade.h"

#include "professor.h"
#include "aluno.h"

#include "departamento.h"
#include "universidade.h"
#include "listaDisciplinas.h"
#include "listaUniversidades.h"

class Principal{

private:
    Professor Einstein;
	Professor Newton;

	Professor Barreto;
	Professor Valfredo;

	Aluno Bruno;
	Aluno Leticia;
	Aluno Gab;
	Aluno Sam;
	Aluno Rodrigo;
	Aluno Lucas;

    Universidade UTFPR;
    Universidade Cambridge;
    Universidade Princeton;

	Departamento FisicaCambridge;
	Departamento FisicaPrinceton;
	Departamento DAFIS;
	Departamento DAINF;

	Disciplina TecProg;
	Disciplina FundProg;
	Disciplina FisTeo;
	Disciplina IntroLog;

	ListaAlunos ListaAlunos;
	ListaUniversidades ObjLUniversidades, LUniversidades;
	ListaDisciplinas ListaDisciplinas, LDisciplinas;
	ListaDepartamentos ListaDepartamentos, LDepartamentos;

	
	int numero_uni;
	int cont_uni;

	Universidade* pUniPrim;
	Universidade* pUniAtual;

    int diaAtual;
    int mesAtual;
    int anoAtual;

public:
    Principal();
    ~Principal();

    void executar();

	//void inicializaPessoas();
	void inicializaObjs();
	void inicializaAlunos();
	void inicializaProfessores();
	void inicializaUniversidades();
	void inicializaDepartamentos();
	void inicializaDisciplinas();
	void inicializaListas();
	void calcIdades(int dAtual, int mAtual, int aAtual);

	void incluaUniversidade(Universidade* puni);
	void listeUniversidadesInicio();
	void listeUniversidadesFim();

	void CadDisciplina();
	void CadDepartamento();
	void CadUniversidade();
	void CadAluno();

	void Menu();
	void MenuCad();
	void MenuExe();
};
