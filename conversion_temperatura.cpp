/* Disene un programa que convierta temperatura de celsius a fahrenheit y viceversa.
pide al usuario que ingrese una temperatura en un sistema y muestra la equivalente
en el otro sistema*/

#include <iostream>

using namespace std;

int main(){
	double celsius,f;
	int opcion;
	
	
	cout<<"Ingrese el tipo de temperatura\n";
	cout<<"=================\n";
	cout<<"\n";
	cout<<"1. Fahrenheit\n";
	cout<<"2. Celsius\n";
	cout<<"\n";
	cout<<"=================\n";
	
	cin>>opcion;
	
	if (opcion ==1){
	cout<<"\nIngrese el valor de la temperatura en grados Celsius:\t";
	cin>>celsius;
	
	f=(celsius * 1.8) + 32;
	
	cout<<"\n"<<celsius<<" grados celsius, son "<<f<<" grados fahrenheit\n";
	}
	
	else {
	cout<<"/nIngrese el valor de la temperatura en grados fahrenheit:\t";
	cin>>f;
	
	celsius= (f-32) /1.8;
	
	cout<<"\n"<<f<<" grados fahrenheit, son "<<celsius<<" grados celsius\n";
	}

	return 0;	
}
