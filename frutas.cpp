#include <iostream>
using namespace std;

string frutas[] ={"Manzana", "Banana", "Naranja", "Fresa", "Kiwi", "Mango", "Pera", "Uva", "Melon", "Papaya"};
string preparados[] ={"Jugo", "Ensalada", "Frape", "Tarta", "Helado", "Mermelado", "Batido", "Asado", "Coctel", "Crudo"};
string frutas[5];
string preparado[5];

string generarFruta()
{
	return frutas[rand()%10];
}
string generarPreparado()
{
	return preparados[rand()%10];
}
void generar(){
	for(int i=0;i<5;i++)
	{
		fruta[i]=generarFruta();
		preparado[i]=generarPreparado();
	}
}	
	void imprimir()
	{
		cout<<"Menu de productos"<<endl;
		for(int i=0;i<5;i++)
			cout<<preparado[i]<<" de "<<fruta[i]<<endl;
	}
	
	int main(int argc, char *argv[]) {
		generar();
		imprimir();
		return 0;
	}
	
	
