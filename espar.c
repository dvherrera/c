#include <stdio.h>

int main(void) {
	int n = 0;
	printf("Introduzca un número: \n");
	scanf("%d",&n);

	if (n%2==0) 
		printf("El número es par \n");
	else
		printf("El número es impar \n");
}