#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int a,b,c;
	int comodin;
	printf("Introducir tres números por teclado, separados por un espacio ");
	scanf("%d %d %d", &a, &b, &c);
	printf("Los números son %d, %d y %d", a, b, c);

	if(a>b) {
		comodin=a;
		a=b;
		b=comodin;
	}

	if(b>c) {
		comodin=b;
		b=c;
		c=comodin;
	}

	if(a>b) {
		comodin=a;
		a=b;
		b=comodin;
	}

	printf("Los números ordenados son %d, %d y %d", a, b, c);

	
}

