#include <stdio.h>

int main(void) {
	int max,min,temp;
	printf("Introduzca dos numeros enteros por teclado, separados por un espacio: ");
	scanf("%d %d",&max,&min);
	if(max<min) {
		temp = max;
		max = min;
		min = temp;
	}
	printf("%d %d", max, min);


}