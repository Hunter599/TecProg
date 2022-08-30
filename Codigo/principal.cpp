

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "principal.h"

Principal::Principal():
	Einstein(),
	Newton(),

	Cambridge(),
	Princeton(),
	UTFPR(),

	FisicaCambridge(),
	FisicaPrinceton()
{
    diaAtual=-1;
    mesAtual=-1;
    anoAtual=-1;

    

    Cambridge.setNome((char*)"Cambridge");
    Princeton.setNome((char*)"Princeton");
    UTFPR.setNome((char*)"UTFPR");

	FisicaCambridge.setNome((char*)"Fisica Cambridge");
	FisicaPrinceton.setNome((char*)"Fisica Princeton");
	DAFIS.setNome((char*)"DAFIS UTFPR");
	DAINF.setNome((char*)"DAINF UTFPR");

	Cambridge.setDpto(&FisicaCambridge);
	Princeton.setDpto(&FisicaPrinceton);
	UTFPR.setDpto(&DAFIS);
	UTFPR.setDpto(&DAINF);

    Einstein.setUniAfil(&Cambridge);
    Newton.setUniAfil(&Princeton);
	Einstein.setDepAfil(&FisicaCambridge);
	Newton.setDepAfil(&FisicaPrinceton);

}

Principal::~Principal() {
}

void Principal::inicializaPessoas()
{
	Einstein.inicializa(14, 3, 1879, (char*)"Einstein");
	Newton.inicializa(4, 1, 1643, (char*)"Newton");
}

void Principal::executar(){

    cout<< "Digite dia, mes e ano"<< endl;
    cin >> diaAtual >> mesAtual >> anoAtual;

    Einstein.calcIdade(diaAtual,mesAtual,anoAtual);
    Newton.calcIdade(diaAtual,mesAtual,anoAtual);

    Einstein.trabalhaUni();
    Newton.trabalhaUni();

    Einstein.showIdade();
    Newton.showIdade();

	UTFPR.showDpts();

}
