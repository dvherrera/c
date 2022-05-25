#include <stdio.h>

int main(void) {
	int h=0,m=0,s=0;
	printf("Introduzca horas, minutos y segundos separados por espacio\n");
	scanf("%d %d %d",&h,&m,&s);
	printf("%d %d %d\n",h,m,s);
	s = s + m*60 + h*60*60;
	printf("El numero de segundos total es %d",s);
}