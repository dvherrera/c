#include <stdio.h>
#include <stdlib.h>

int factorial(int);

void main(void) {
	int n;
	printf("Factorial, introduzca un numero: ");
	scanf("%d",&n);
	if(n<0)
		printf("\nEl factorial de un numero negativo no se puede calcular\n");
	else
		printf("\nEl factorial de %d, es %d\n",n,factorial(n));
	

}

int factorial(int n) {
	int f = 1;
	while(n>1){
		f = f * n;
		n--;
	}
	return f;
	
}