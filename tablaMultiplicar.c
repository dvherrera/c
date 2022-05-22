#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int n;
	int p=1;
	int i=1;

	printf("Introduzca un numero para pintar su tabla de multiplicar: \n");
	scanf("%d",&n);
	printf("\nTabla del %d\n",n);
	printf("======================\n");

	while (i<=10) {
		p = n * i;
		printf("%d x %d = %d\n", i, n, p);
		i++;
	}
}