#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_

class Universidade;

class Disciplina {

private:
    char nome[30];

public:

    Disciplina(char* n = (char*)"");
    ~Disciplina();

    void setDisc(char* n);


};

#endif