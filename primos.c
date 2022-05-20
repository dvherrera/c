#include <stdio.h>

int main(void) {

   int numero;
   int i=2;
   printf("Introduzca un numero por teclado:\n");
   scanf("%d",&numero);

   for(i=2;i<numero/2;i++) {
      if(numero%i==0) {
         printf("El numero no es primo");
         return 0;
      };
   }
   printf("El numero es primo");
	
}