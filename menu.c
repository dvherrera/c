#include <stdio.h>

void menu(void);

int main(void) {
	int opc=0;
	do {
		menu();
		scanf("%d", &opc);
	} while (opc<0 || opc>4);
	printf("\nOpcion elegida %d\n\n", opc);
}

void menu(void) {
	printf("\n\nMenu\n");
	printf("====\n");
	printf("0 - Salir\n");
	printf("1 - Opcion 1\n");
	printf("2 - Opcion 2\n");
	printf("3 - Opcion 3\n");
	printf("4 - Opcion 4\n");
	printf("\nElija opcion\n");
}