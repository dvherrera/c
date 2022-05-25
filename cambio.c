#include <stdio.h>
#include <math.h>



int main(void) {
	int sm[10] = {1000,500,200,100,50,20,10,5,2,1};	//Vector de moneda
	int cm[10] = {0,0,0,0,0,0,0,0,0,0};				//Vector número de monedas
	float pago;
	int precio = 200;
	int devol;
	int i=0;

	printf("Introduzca dinero para pago: ");
	scanf("%f",&pago);

	devol = pago*100 - precio;
	printf("Cantidad a devolver %.2f",devol/100.);

	do {
		cm[i] = devol/sm[i];
		//printf("%d - ",cm[i]);
		devol = devol%sm[i];
		//printf("%d\n",sm[i]);
		i++;
	} while(devol>0||i<10);

	for(int j=0;j<i;j++) {
		if(cm[j]>0)
			printf("\n%d monedas de %.2f",cm[j],sm[j]/100.0);
	}
}