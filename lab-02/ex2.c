#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(char **a, char **b){
	char *tmp = *a;
	*a = *b;
	*b = tmp;
}


char* delete_first(char *s, char *pattern)
{
	int ok = 0;
	unsigned int i, j, k;
	char* string = malloc((strlen(s) - strlen(pattern))*sizeof(char));
	for(i = 0; i < strlen(s); i++){
	if(ok == 0){
		j = 0;
		while(*(s+i+j) == *(pattern + j)){
			j++;
		}
		if(j == strlen(pattern))
			ok = 1;
	}
	if(ok == 1){
		int p = 0;
		for(k = 0; k < i; k++)
			string[k] = s[k];
		p = k;
		for(k = i+j; k < strlen(s); k++)
			string[p++] = s[k];
		break;
	}
	}

	return string;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s \n", delete_first(s, pattern));

	return 0;
}
