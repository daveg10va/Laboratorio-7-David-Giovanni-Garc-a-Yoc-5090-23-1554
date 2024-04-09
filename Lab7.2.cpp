#include <iostream>
#include <string>
using namespace std;

class Persona{
	private:	//Atributos.
		string nombre, apellido, ocupacion, residencia;
		int edad;
		 
	//Constructor
	public:		
		Persona(string nombre, string apellido, string ocupacion, string residencia, int edad){
		this->nombre = nombre;
		this->apellido = apellido;
		this->ocupacion = ocupacion;
		this->residencia = residencia;
		this->edad = edad;	
		}
    
	//Métodos Set 
    void setNombre(string nombre) {
        this->nombre = nombre;
	}
	
	void setApellido(string apellido) {
        this->apellido = apellido;
	}
	
	void setOcupacion(string ocupacion) {
        this->ocupacion = ocupacion;
    }
	 
	void setResidencia(string residencia) {
        this->residencia = residencia;
    }
	    
    void setEdad(int edad) {
        this->edad = edad;
    }

    // Métodos Get
    string getNombre() {
        return nombre;
    }

	string getApellido() {
        return nombre;
    }
    
    string getOcupacion() {
        return ocupacion;
    }
    
    string getResidencia() {
        return residencia;
    }
    
    int getEdad() {
        return edad;
    }

	void mostrarInfo(){
		cout << "Nombre: " << nombre << "\nApellido: " << apellido << "\nOcupacion: " << ocupacion << "\nResidencia: " << residencia << "\nEdad: " << edad << endl;
	}
};

int main(){
	//Instanciar en memoria.
	Persona persona1("David", "Garcia", "Ingeniero", "Amatitlan", 20);
	Persona persona2("Pablo", "Danton", "Licenciado", "Villa Nueva", 24);
	Persona persona3("Moises", "Marat", "Cientifico", "Paris", 20);
	
	cout << "-------------------------------------------";
	
	cout << "\n..............DATOS...................";
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion de la persona 1" << endl;
	persona1.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion de la persona 2" << endl;
	persona2.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion de la persona 3" << endl;
	persona3.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	
	// MODIFICACIÓN 
	persona1.setNombre("Luis");
	persona2.setOcupacion("Contador");
	persona3.setResidencia("Viena");
	
	cout << "-------------------------------------------";
	
	cout << "\n..............DATOS ACTUALIZADOS...................";
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion de la persona 1" << endl;
	persona1.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion del estudiante 2" << endl;
	persona2.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	cout << "\nInformacion del estudiante 3" << endl;
	persona3.mostrarInfo();
	
	cout << "\n-------------------------------------------";
	
	return 0;
}
