#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main(void) {
	setlocale(LC_ALL, "es_ES.UTF-16");
	//setConsoleCP(1252);
	//setConsoleOutputCP(1252);
	printf("ó á");
	return 0;
}