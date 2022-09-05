#ifndef _DEPARTAMENTO_H_
#define _DEPARTAMENTO_H_


class Universidade;
class Disciplina;

class Departamento{
private:

    char nomeD[30];
	Universidade* uniD;
	
	Disciplina *disciplinaPrim;
	Disciplina *disciplinaAtual;

	

public:

    Departamento(char* nd =(char*)"");
    ~Departamento();

    void setNome(char* nd);
	void setUniAfil(Universidade *unid);
    char* getNome();

	void incluiDisciplina(Disciplina* disc);
	void listeDisciplinasInicio();
	void listeDisciplinasFim();

	

};

#endif
