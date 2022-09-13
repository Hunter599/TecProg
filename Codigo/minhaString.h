#pragma once

class minhaString
{
private:
	char *str;
	int tamanho;

	void setString(const char* s);
public:
	minhaString(const char* s ="");
	~minhaString();

	const char* getString();

	// Sobre carga de operadores
	void operator = (const char* s);
	void operator = (MinhaString& s); //<-- referencia escondida
	bool operator == (MinhaString& s); //<-- referencia escondida
	minhaString operator + (const minhaString& s1, const minhaString& s2); //<-- referencia escondida


};

ostream& operator<< (ostream& saida, MinhaString& s);
