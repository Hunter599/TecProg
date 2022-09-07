#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_
#include "departamento.h"
#include "elAluno.h"


class Disciplina {

private:
    char nomeDisc[50];
	//char area_conhecimento[150]; <-- slide do professor, nao sei que informacao vai aqui
	Departamento* dDepAfil;

	Disciplina* proxDisc;
	Disciplina* antDisc;
	

	 

public:

    Disciplina(char* n = (char*)"");
    ~Disciplina();

    void setDisc(char* n);
	char* getDisc();

	void setDepAfil(Departamento* dep);
	Disciplina* getProxDisc() const;
	Disciplina* getAntDisc() const;

	void setProxDisc(Disciplina* proxDis);
	void setAntDisc(Disciplina* antDis);

};

#endif