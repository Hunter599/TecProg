#include "minhaString.h"

void minhaString::operator = (MinhaString& s) 
{
	operator = (s.getString());
}

bool minhaString::operator == (MinhaString& s) 
{
	if (0 == strcmp(pStr, s.getString())) {
		return true;
	}
	else {
		return false;
	}
}

minhaString operator += (const minhaString &s) 
{
	char** temp = &s;
	*temp = new char[size];
	strcpy(value, *temp);
	strcat(value, s.getValue());
	return temp;

}

minhaString operator + (const minhaString& s1, const minhaString& s2) 
{
	minhaString answer;
	answer += s1;
	answer += s2;
	return answer;
		
}

ostream &operator<< (ostream &saida, MinhaString& s) 
{
	saida << s.getString();
	return saida; // possibilita encadeamento 
}

