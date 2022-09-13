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

minhaString operator + (const minhaString& s1, const minhaString& s2) 
{
	
}

ostream &operator<< (ostream &saida, MinhaString& s) 
{
	saida << s.getString();
	return saida; // possibilita encadeamento 
}

