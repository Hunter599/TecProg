
#include "pessoa.h"
#include "universidade.h"

#include "pessoa.h"
#include "professor.h"
#include "aluno.h"

#include "departamento.h"
#include "universidade.h"
#include "disciplina.h"

class Principal{

private:
    Professor Einstein;
	Professor Newton;

	Professor Barreto;
	Professor Valfredo;

	Aluno Bruno;
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


    int diaAtual=0;
    int mesAtual=0;
    int anoAtual=0;

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

};
