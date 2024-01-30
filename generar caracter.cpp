#include <iostream>
using namespace std;

char caracter[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int numero[10];
char c[10];

char generarCaracter()
{
	return caracter[rand() % 26];
}

int generarNumero()
{
	return rand() % 51;
}

bool caracterRepetido(char nuevoCaracter, int indice)
{
	for (int i = 0; i < indice; i++)
	{
		if (c[i] == nuevoCaracter)
			return true;
	}
	return false;
}

void llenarDatos()
{
	for (int i = 0; i < 10; i++)
	{
		char nuevoCaracter;
		do
		{
			nuevoCaracter = generarCaracter();
		} while (caracterRepetido(nuevoCaracter, i));
		
		numero[i] = generarNumero();
		c[i] = nuevoCaracter;
	}
}

void imprimir()
{
	cout << "CAR\tNUM" << endl;
	for (int i = 0; i < 10; i++)
		cout << c[i] << "\t" << numero[i] << endl;
}

int main()
{
	llenarDatos();
	imprimir();
	return 0;
}
