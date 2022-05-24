#include <string.h>
#include <iostream>

using namespace std;

int main() {
	cout << ("Hola, por favor ingrese su nombre ... \n");
	string cadena = "Hola ";
	string nombre;
	cin >> nombre;

	cadena = cadena + nombre;
	cout << (cadena);
	return 0;
}