#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

//Clase Padre
class Persona{
	protected:	//Atributos.
		string nombre, apellido, ocupacion, residencia;
		int edad;
		 
	//Constructor
	public:		
		Persona(string, string, string, string, int);
    
    	//Método para imprimir datos
		void mostrarPersona();
};

//Constructor de Persona 
Persona::Persona(string _nombre, string _apellido, string _ocupacion, string _residencia, int _edad){
	nombre = _nombre;
	apellido = _apellido;
	ocupacion = _ocupacion;
	residencia = _residencia;
	edad = _edad;
}

//Clase Hija 
class Estudiante : public Persona{
	private:
		string carnet;
		float promedio;	
	public:
		//Constructor
		Estudiante(string nombre, string apellido, string ocupacion, string residencia, int edad, string carnet, float promedio);
		
		//Método para imprimir datos
		void mostrarEstudiante();		
};

//Constructor de Estudiante
Estudiante::Estudiante(string _nombre, string _apellido, string _ocupacion, string _residencia, int _edad, string _carnet, float _promedio) : Persona(_nombre, _apellido, _ocupacion, _residencia, _edad){
	carnet = _carnet;
	promedio = _promedio;	
}

//Imprimir Datos de Persona
void Persona::mostrarPersona(){
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "Ocupacion: " << ocupacion << endl;
	cout << "Residencia: " << residencia << endl;
	cout << "Edad: " << edad << endl;
}

//Imprimir Datos de Estudiante
void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout << "Carnet: " << carnet << endl;
	cout << "Promedio: " << promedio << endl;
}

int main(){
	//Instanciar en memoria.
	Estudiante estudiante1("Jose", "De Leon", "Ingeniero", "Amatitlan", 20, "2345-23-4331", 85);
	Estudiante estudiante2("Mario", "Dominguez", "Licenciado", "Villa Nueva", 24, "4521-54-1245", 90);
	Estudiante estudiante3("Josue", "Diaz", "Cientifico", "Amatitlan", 20, "4356-23-5542", 95);
	
	cout << "-------------------------------------------";
	
	cout << "\n..............DATOS...................";
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion del estudiante 1" << endl;
	estudiante1.mostrarEstudiante();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion del estudiante 2" << endl;
	estudiante2.mostrarEstudiante();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion del estudiante 3" << endl;
	estudiante3.mostrarEstudiante();
	
	cout << "\n-------------------------------------------";
	
	return 0;
}
