#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_
#include "departamento.h"
#include "listaAlunos.h"



class Disciplina {

private:
    char nomeDisc[50];
	//char area_conhecimento[150]; <-- slide do professor, nao sei que informacao vai aqui
	Departamento* dDepAfil;

	
	
	ListaAlunos objListaAlunos;

	 

public:

    Disciplina(char* n = (char*)"");
    ~Disciplina();

    void setDisc(char* n);
	char* getNomeDisc();

	void setDepAfil(Departamento* dep);

	void incluiAluno(Aluno* al);
	void listeAlunosInicio();
	void listeAlunosFim();


};

#endif