#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *new_string(char *cont_str)
{
	//alocare dinamica pentru stringul introdus
	char *res;

	res = calloc(100, sizeof(char));
	strcpy(res, cont_str);

	return res;
}

int my_strlen(const char *str)
{
	//in functia asta am calculat lungimea
	int length  = 0;
	while(*str != '\0')
	{
		length++;
		str++;
	}
	return length;

	(void) str;
	return -1;
}

void equality_check(const char *str)
{
	//aici fac egalitatea pentru a doua parte a exercitiului
	int i, n;
	char curent, verif;
	n = my_strlen(str);
	for(i = 0; i < n; i++)
	{
		curent = *(str+i);
		verif = *(str + ((i + (1 << i)) % n));
		if(!(curent ^ verif))
			printf("%c %p ", curent, str + i);
	}
	(void) str;
}

int main(void)
{
	char sir[101], *str;
	scanf("%s[^\n]", sir);
	str = new_string(sir);
	printf("%s %d\n",str ,my_strlen(str));
	equality_check(str);
	free(str);
	return 0;
}

