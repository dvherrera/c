#include <stdio.h>
#include <math.h>



int main(void) {
	int sm[] = {1000,500,200,100,50,20,10,5,2,1};
	int cm[10] = {0,0,0,0,0,0,0,0,0,0};
	int pago;
	int precio = 200;
	int devol;
	printf("Introduzca dinero para pago: ");
	scanf("%d",&pago);
	devol = pago - precio;
	do {
		cm[i] = devol\sm[i];
		devol = devol%sm[i];
		i++;
	} while(devol>0);

	for(j=0;j<i;j++) {
		printf("\ncm[j]");
	}
}