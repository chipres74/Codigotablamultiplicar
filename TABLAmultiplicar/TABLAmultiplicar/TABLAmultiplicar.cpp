// TABLAmultiplicar.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<string>
using namespace std;

int main() {
	float i;
	float num;
	cout << "Introduzca un numero para generar la tabla: " << endl;
	cin >> num;
	for (i = 0; i <= 10; i++) {
		cout << num << " X " << i << " = " << (num * i) << endl;
	}
	return 0;
}

