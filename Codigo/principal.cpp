#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "principal.h"
#include "universidade.h"
#include "elUniversidade.h"

Principal::Principal() :
	Einstein(),
	Newton(),
	Barreto(),
	Valfredo(),

	Bruno(),
	Leticia(),
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

	listaAlunos(),
	listaPessoas(),
	ListaDisciplinas(),
	ListaDepartamentos()
{
    diaAtual=-1;
    mesAtual=-1;
    anoAtual=-1; 

	pUniPrim = nullptr;
	pUniAtual = nullptr;

	numero_uni = 45;
	cont_uni = 0;

	contId = 0;

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
	Bruno.setId(++contId);

	Gab.inicializa(15, 5, 2004, (char*)"Gabi");
	Gab.setRa(002);
	Gab.setId(++contId);

	Sam.inicializa(3, 1, 1999, (char*)"Samara");
	Sam.setRa(003);
	Sam.setId(++contId);

	Rodrigo.inicializa(6, 9, 2002, (char*)"Rodrigo"); ;
	Rodrigo.setRa(004);
	Rodrigo.setId(++contId);

	Lucas.inicializa(9, 8, 2004, (char*)"Lucas");
	Lucas.setRa(005);
	Lucas.setId(++contId);

	Leticia.inicializa(18, 5, 2004, (char*)"Leticia");
	Leticia.setRa(006);
	Leticia.setId(++contId);


	Aluno* pontAluno;
	Pessoa* pontPessoa;

	pontAluno = &Bruno;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);

	pontAluno = &Gab;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);

	pontAluno = &Leticia;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);

	pontAluno = &Rodrigo;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);

	pontAluno = &Lucas;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);

	pontAluno = &Sam;
	pontPessoa = static_cast<Pessoa*>(pontAluno);
	listaPessoas.incluaPessoa(pontPessoa);
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

	Pessoa* pontPessoa;
	Professor* pontProfessor;

	//Inclusao de professores na lista pessoas
	pontProfessor = &Einstein;
	pontPessoa = static_cast<Pessoa*> (pontProfessor);
	listaPessoas.incluaPessoa(pontPessoa);

	pontProfessor = &Newton;
	pontPessoa = static_cast<Pessoa*> (pontProfessor);
	listaPessoas.incluaPessoa(pontPessoa);
}

//Inclus�o das universidades na lista

void Principal::incluaUniversidade(Universidade* puni)
{
	ObjLUniversidades.incluaUni(puni);
}

//Listagem de universidades

void Principal::listeUniversidadesInicio()
{
	cout << "Universidades :" << endl;
	ObjLUniversidades.listeUniIni();
}

void Principal::listeUniversidadesFim()
{
	cout << "Universidades :" << endl;
	ObjLUniversidades.listeUniFim();
}


void Principal::inicializaListas() 
{
	//ListaAlunos.setNomeLista((char*)"Lista de Alunos"); O TEMPLATE LISTA JA NAO POSSUI UM ATRIBUTO PARA NOME
	ListaDisciplinas.setNomeLista((char*)"Lista de Disciplinas");
	ListaDepartamentos.setNomeLista((char*)"Lista de Departamentos");

	//Inclus�o dos alunos �s disciplinas
	TecProg.incluiAluno(&Bruno);
	TecProg.incluiAluno(&Leticia);
	TecProg.incluiAluno(&Gab);
	TecProg.incluiAluno(&Rodrigo);

	FisTeo.incluiAluno(&Bruno);
	FisTeo.incluiAluno(&Lucas);
	FisTeo.incluiAluno(&Rodrigo);

	FundProg.incluiAluno(&Bruno);
	FundProg.incluiAluno(&Leticia);
	FundProg.incluiAluno(&Sam);
	FundProg.incluiAluno(&Rodrigo);

	IntroLog.incluiAluno(&Sam);
	IntroLog.incluiAluno(&Gab);
	IntroLog.incluiAluno(&Leticia);

	//Inclusao dos alunos na lista alunos geral
	listaAlunos.incluaAluno(&Bruno);
	listaAlunos.incluaAluno(&Leticia);
	listaAlunos.incluaAluno(&Gab);
	listaAlunos.incluaAluno(&Sam);
	listaAlunos.incluaAluno(&Rodrigo);
	listaAlunos.incluaAluno(&Lucas);


	//Inclus�o das disciplinas aos departamentos
	DAFIS.incluiDisciplina(&FisTeo);
	DAINF.incluiDisciplina(&FundProg);
	DAINF.incluiDisciplina(&TecProg);
	DAINF.incluiDisciplina(&IntroLog);

	//Inclus�o dos departamentos �s universidades
	UTFPR.incluaDep(&DAINF);
	UTFPR.incluaDep(&DAFIS);
	Princeton.incluaDep(&FisicaPrinceton);
	Cambridge.incluaDep(&FisicaCambridge);

	//Inclus�o das universidades � lista em principal
	incluaUniversidade(&UTFPR);
	incluaUniversidade(&Princeton);
	incluaUniversidade(&Cambridge);
	
}

void Principal::calcIdades(int dAtual, int mAtual, int aAtual)
{
	Einstein.calcIdade(dAtual, mAtual, aAtual);
	Newton.calcIdade(dAtual, mAtual, aAtual);
	Bruno.calcIdade(dAtual, mAtual, aAtual);
	Leticia.calcIdade(dAtual, mAtual, aAtual);
	Rodrigo.calcIdade(dAtual, mAtual, aAtual);
	Lucas.calcIdade(dAtual, mAtual, aAtual);
	Sam.calcIdade(dAtual, mAtual, aAtual);
	Gab.calcIdade(dAtual, mAtual, aAtual);
}

void Principal::Menu()
{
	int opcao = -1;

	while (opcao != 3)
	{
		system("cls"); //limpa a tela

		cout << " Informe sua opcao: " << endl;
		cout << " 1 - Cadastrar. " << endl;
		cout << " 2 - Executar. " << endl;
		cout << " 3 - Sair. " << endl;
		cin >> opcao;

		switch (opcao)
		{
			case 1: 
			{
				MenuCad();
			}
				break;

			case 2:
			{
				MenuExe();
			}
				break;

			case 3:
			{
				cout << " FIM " << endl;
			}
				break;

			default:
			{
				cout << "Opcao Invalida." << endl;
				system("Pause");
			}

		}
	}
}

void Principal::MenuCad()
{
	int opcao = -1;
	while (opcao != 5)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 1 - Cadastrar Disciplina. " << endl;
		cout << " 2 - Cadastrar Departamento. " << endl;
		cout << " 3 - Cadastrar Universidade. " << endl;
		cout << " 4 - Cadastrar Aluno. " << endl;
		cout << " 5 - Voltar. " << endl;
		cin >> opcao;


		switch (opcao)
		{
		case 1: { CadDisciplina(); }
				break;
		case 2: { CadDepartamento(); }
				break;
		case 3: {CadUniversidade(); }
				break;
		case 4: {CadAluno(); }
				break;
		case 5: {cout << "FIM" << endl; }
				break;
		default: {
			cout << "Opcao invalida." << endl;
			getchar();
		}

	}


	}
}

void Principal::MenuExe()
{
	int opcao = -1;

	while (opcao != 4)
	{
		system("cls");
		cout << " Informe sua opcao: " << endl;
		cout << " 1 - Listar Disciplinas. " << endl;
		cout << " 2 - Listar Departamentos. " << endl;
		cout << " 3 - Listar Universidades. " << endl;
		cout << " 4 - Listar Alunos. " << endl;
		cout << " 5 - Listar Pessoas. " << endl;
		cout << " 6 - Voltar. " << endl;
		cin >> opcao;

		switch (opcao)
		{
		case 1: 
		{	
			ListaDisciplinas.listarDisciplinasInicio();
			while (getchar() != '\n');
			getchar();
		} break;
		case 2:
		{
			ListaDepartamentos.listeDepsIni();
			while (getchar() != '\n');
			getchar();
		} break;
		case 3:
		{
			ObjLUniversidades.listeUniIni();
			while (getchar() != '\n');
			getchar();
		} break;
		case 4:
		{
			listaAlunos.listarAlunosIn();
			while (getchar() != '\n');
			getchar();
		} break;
		case 5:
		{
			listaPessoas.listarPessoasIn();
			while (getchar() != '\n');
			getchar();
		} break;
		case 6:
		{
			cout << "FIM" << endl;
		} break;
		default:
		{
			cout << "Opcao invalida" << endl;
			while (getchar() != '\n');
			getchar();
		} break;
		}
	}
}

void Principal::CadUniversidade()
{
	char nomeUniversidade[150];
	Universidade* puniv = nullptr;

	cout << "Qual o nome da universidade?" << endl;
	cin >> nomeUniversidade;

	puniv = new Universidade();
	puniv->setNome(nomeUniversidade);
	ObjLUniversidades.incluaUni(puniv);
}

void Principal::CadDepartamento()
{
	char nomeUniversidade[150];
	char nomeDepartamento[150];

	Universidade* puniv;
	Departamento* pdep;

	cout << "Qual o nome da universidade do departamento?" << endl;
	cin >> nomeUniversidade;
	puniv = ObjLUniversidades.localizar(nomeUniversidade);

	if (puniv != nullptr)
	{
		cout << "Qual o nome do departamento?" << endl;
		cin >> nomeDepartamento;
		pdep = new Departamento();
		pdep->setNome(nomeDepartamento);
		pdep->setUniAfil(puniv);
		ListaDepartamentos.incluaDep(pdep);
		puniv->incluaDep(pdep);
	}
	else
	{
		cout << "Universidade inexistente." << endl;
	}
}

void Principal::CadDisciplina()
{
	char nomeDepartamento[150];
	char nomeDisciplina[150];

	Departamento* pdep;
	Disciplina* pdisc;

	cout << "Qual o nome do departamento da disciplina?" << endl;
	cin >> nomeDepartamento;
	pdep = ListaDepartamentos.localizar(nomeDepartamento);

	if (pdep != nullptr)
	{
		cout << "Qual o nome da disciplina?" << endl;
		cin >> nomeDisciplina;
		pdisc = new Disciplina();
		pdisc->setDisc(nomeDisciplina);
		pdisc->setDepAfil(pdep);
		ListaDisciplinas.incluaDisciplina(pdisc);
		pdep->incluiDisciplina(pdisc);
	}
	else
	{
		cout << "Departamento inexistente." << endl;
	}

}


void Principal::CadAluno() 
{
	char nomeAl[150];
	int ra;
	Aluno* pontAluno= NULL;
	Pessoa* pontPessoa = NULL;

	cout << "Digite o nome do aluno" << endl;
	cin >> nomeAl;

	cout << "Digite o RA do aluno" << endl;
	cin >> ra;

	pontAluno = new Aluno();
	pontAluno->setNome(nomeAl);
	pontAluno->setRa(ra);
	pontAluno->setId(++contId);

	listaAlunos.incluaAluno(pontAluno);

	// Logo abaixo a forma moderna de fazer cast
	pontPessoa = static_cast <Pessoa*> (pontPessoa);

	// Logo abaixo a forma antiga e desaconselhavel de fazer cast
	// ponteiroPessoa = ( Pessoa* ) ponteiroAluno;	//Inclusao de aluno cadastrado en lista de pessoas	listaPessoas.incluaPessoa(pontPessoa);	
}

void Principal::executar(){

    cout<< "Digite dia, mes e ano"<< endl;
    cin >> diaAtual >> mesAtual >> anoAtual;

    Einstein.trabalhaUni();
    Newton.trabalhaUni();

	calcIdades(diaAtual, mesAtual, anoAtual);

	cout << endl; //pula linha

	//Mostra pessoas e suas idades
    Einstein.showIdade();
    Newton.showIdade();
	Bruno.showIdade();
	Leticia.showIdade();
	Rodrigo.showIdade();
	Lucas.showIdade();
	Sam.showIdade();
	Gab.showIdade();

	cout << endl;

	//Mostra listas de alunos de acordo com as disciplinas que eles cursam
	TecProg.listeAlunosInicio();
	FisTeo.listeAlunosInicio();
	FundProg.listeAlunosInicio();
	IntroLog.listeAlunosInicio();

	cout << endl;

	//Mostra lista de disciplinas de cada departamento
	DAFIS.listeDisciplinasInicio();
	cout << endl;
	DAINF.listeDisciplinasInicio();

	cout << endl;

	//Mostra lista de departamentos de cada universidade
	UTFPR.listeDepsIni();
	Cambridge.listeDepsIni();
	Princeton.listeDepsIni();

	cout << endl;

	//Mostra lista de universidades
	listeUniversidadesInicio();

	cout << endl;
	cout << "Aperte qualquer botao para ir para o menu." << endl;

	while (getchar() != '\n'); //Solucao alternativa a fflush(stdin) porque fflush(stdin) nao estava funcionando

	getchar();

	Menu();
}
