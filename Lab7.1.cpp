#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void ingresar(ofstream &archive){
	string nombre, apellido, residencia;
	int cant, edad;
	
	cout << "Ingrese el numero de personas a registrar: " << endl;
	cin >> cant;
	
	for(int i = 1; i <= cant; i++){
		cout << "------ PERSONA no. " << i << "-------" << endl;
		cout << "Ingrese el nombre: " << endl;
		cin >> nombre;
		
		cout << "Ingrese el apellido: " << endl;
		cin >> apellido;
		
		cout << "Ingrese la residencia: " << endl;
		cin >> residencia; 
		
		cout << "Ingrese la edad: " << endl;
		cin >> edad;
		
		archive << nombre << " " << apellido << " " << residencia << " " << edad << endl;
	}
}

void mostrar(ifstream &archive){
	string nombre, apellido, residencia;
	int edad;
	
	cout << "---- REGISTRO DE PERSONAS ---" << endl;
	while(archive >> nombre >> apellido >> residencia >> edad){
		cout << "Nombre: " << nombre << ", Apellido: " << apellido << ", Residencia: " << residencia << ", Edad: " << edad << endl;
	}
}

int main(){
	ofstream archivoSalida("personas.txt");
	
	if(archivoSalida.fail()){
		cout << "No fue posible abrir el archivo :(";
		exit(1); //Sale inmediatamente del programa.
	}
	
	ingresar(archivoSalida);
	archivoSalida.close();
	
	ifstream archivoEntrada("personas.txt");
	
	if(archivoEntrada.fail()){
		cout << "No fue posible abrir el archivo :(";
		exit(1); //Sale inmediatamente del programa.
	}
	
	mostrar(archivoEntrada);
	archivoEntrada.close();
	
	return 0;
}
