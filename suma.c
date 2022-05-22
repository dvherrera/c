#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int n;
	int suma=0;

	printf("Introduzca un numero para hallar su suma: ");
	scanf("%d",&n);

	if(n>0){
		while(n>0) {
			suma += n;
			n--;
		}
		printf("La suma es %d",suma);
	} else {
		printf("error");
	}
}