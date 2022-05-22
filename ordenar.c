#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int numeros[3];
	int comodin;
	int i, j;

	printf("Introducir tres números por teclado");
	for(i=0;i<3;i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("Los números son:");
	for(i=0;i<3;i++){
		printf("%d ",numeros[i]);
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(numeros[j]>numeros[j+1]) {
				comodin = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = comodin;
			}
		}
	}

	printf("Los números son:");
	for(i=0;i<3;i++){
		printf("%d ",numeros[i]);
	}
	
}

