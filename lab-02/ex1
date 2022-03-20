#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    printf("Prima afisare:");
    for(int i = 0; i < 5; i++)
	    printf("%p -> 0x%x\n", v + i, v[i]);
	printf("\n");
	unsigned char *char_ptr = v;
	for(int i = 0; i < 20; i++)
		printf("%p -> 0x%x\n", char_ptr + i, char_ptr[i]);
	printf("\n");
	
	for(int i = 0; i < 40; i = i + 2)
		printf("%p -> 0x%x\n", char_ptr + i, char_ptr[i/2]);
	printf("\n");

	for(int i = 0; i < 80; i = i + 4)
		printf("%p -> 0x%x\n", char_ptr + i, char_ptr[i/4]);
    return 0;
}
