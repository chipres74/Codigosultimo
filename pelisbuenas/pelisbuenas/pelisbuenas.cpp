// pelisbuenas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
	int primera;
	int segunda;
	int tercera;
	int total;
	cout << "Cual es el costo de la primera pelicula" << endl;
	cin >> primera;
	cout << "Cual es el costo de la segunda pelicula" << endl;
	cin >> segunda;
	cout << "Cual es el costo de la tercera pelicula" << endl;
	cin >> tercera;
	if ((primera) > (segunda) && (primera) > (tercera)) {
		total = segunda + tercera;
		cout << "El total es de: " << total << endl;
	}
	 else if ((segunda) > (primera) && (segunda) > (tercera)) {
		total = primera + tercera;
		cout << "El total es de: " << total << endl;
	}
	else {
		total = primera + segunda;
		cout << "El total es de: " << total << endl;
	}
	return 0;
}
