#ifndef _PESSOA_H_
#define _PESSOA_H_



class Pessoa
{
    //ATRIBUTOS - ATTRIBUTES
private:
    int diaP;
    int mesP;
    int anoP;
    int idade;
    char nome[30];
  


    //METODOS - METHODS
public:
	Pessoa(int diaNa, int mesNa, int anoNa, char* na = (char*)"");
    Pessoa();
    ~Pessoa();

    void inicializa(int dp, int mp, int ap, char* np= (char*)"");

    void calcIdade(int d, int m, int a);
    void showIdade();
    int informaIdade();

    

    






};


#endif
