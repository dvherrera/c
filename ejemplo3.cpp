#include <string.h>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
	list<int> miLista;	//Creamos
	list<int>::iterator it;

	for(int i=10; i<=50; i=i+10){
		miLista.push_back(i);
	}
	// se agrega un 10 20 30 40 50 a la lista

	it = miLista.begin(); //se establece el iterador al comienzo de la lista

	it++; //movemos el interador una posición (ahora estamos en 20)

	miLista.insert(it,11); //se inserta un 11 en la posición del 20 y se desplaza, 10 11 20 30 40 50 
	miLista.insert(it,3,18); // Se insertan 3 18s en la posición del 20, 10 11 18 18 18 20 30 40 50 

	vector<int> myvector(2,19); //creamos un vector que poseerá dos elementos con valor de 19

	miLista.insert(it, myvector.begin(),myvector.end()); // lo insertamos en la lista, enviando los iteradores del propio vector
	// 10 11 18 18 18 19 19 20 30 40 50

	cout << "Mi lista contiene lo siguiente: ";

	for(it=miLista.begin(); it!=miLista.end(); it++) {
		cout << ' ' << *it;
	}

	return 0;
}