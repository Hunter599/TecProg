
#include "pessoa.h"
#include "universidade.h"
#include "departamento.h"

class Principal{

private:
    Pessoa Einstein;
    Pessoa Newton;

    Universidade UTFPR;
    Universidade Cambridge;
    Universidade Princeton;

	Departamento FisicaCambridge;
	Departamento FisicaPrinceton;
	Departamento DAFIS;
	Departamento DAINF;

    int diaAtual=0;
    int mesAtual=0;
    int anoAtual=0;

public:
    Principal();
    ~Principal();

    void executar();
	void inicializaPessoas();

};
