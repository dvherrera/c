#include <stdio.h>

void inter(int arr[]);

int main(void) {
	int a[2];
	printf("Introduzca dos numeros enteros por teclado, separados por un espacio: ");
	scanf("%d %d",&a[0],&a[1]);
	inter(a);
	printf("%d %d", a[0], a[1]);
}

void inter(int arr[]) {
	int aux;
	if (arr[0]<arr[1]) {
		aux = arr[0];
		arr[0] = arr[1];
		arr[1] = aux;
	}
}