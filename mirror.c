#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *new_string(char *cont_str)
{
	//alocare dinamica pentru string
	char *res;

	res = calloc(100, sizeof(char));
	strcpy(res, cont_str);

	return res;
}


void mirror(char *s)
{
	//o interschimbare cinstita
	int i = 0;
	char aux;
	int length = strlen(s);
	for(i = 0; i < (length >> 1); i++)
	{
		aux = *(s+i);
		*(s+i) = *(s+length-i-1);
		*(s+length-i-1) = aux;

	}

	(void) s;
}

int main()
{
	char *s,sir[101];

	scanf("%s[^\n]", sir);
	s = new_string(sir);
	mirror(s);

	printf("%s", s);
	free(s);

	return 0;
}

