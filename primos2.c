#include <stdio.h>

int esPrimo(int);

int main(void) {

   int numero;
   int i=2;
   printf("Introduzca un numero por teclado:\n");
   scanf("%d",&numero);

   if(numero<0){
      printf("\nEste programa solo es valido para numeros positivos");
      return 0;
   }

   if(esPrimo(numero)) {
      printf("\nEl numero %d es primo",numero);
      return 0;
   } else {
      printf("\nEl numero %d no es primo",numero);
      return 0;
   }
}

int esPrimo(int numero) {
   int i=2;
   if (numero==0 || numero==1)
      return 0;
   do {
      if(numero%i==0)
         return 0;
      i++;
   } while(i < numero/2);

   return 1;

}