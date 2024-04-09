#include <stdio.h>
#include <windows.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdbool.h>

using namespace std;

struct Estudiante{
	string nombre, apellido, curso, carnet;
	int edad;
};

int main(){
	Estudiante estudiantes[5] = {
		{"David", "Garcia", "Programacion 1", "5090-23-1554", 19}, 
		{"Juan", "Lorenzana", "Fisica 1", "5090-23-5625", 18},
		{"Pedro", "Perez", "Calculo 1", "5090-23-5243", 22},
		{"Fernando", "Reyes", "Estadistica 1", "5090-23-6736", 20},
		{"Leonardo", "Gutierrez", "Introduccion a Sistemas", "5090-23-8757", 17}	
	};
	
	Estudiante aux;
	for (int i = 0; i < 5; i++){
		for(int j = 0; j < 5 - i - 1; j++){
			if(estudiantes[j].nombre > estudiantes[j+1].nombre){
				aux = estudiantes[j];
				estudiantes[j] = estudiantes[j+1];
				estudiantes[j+1] = aux; 
			}
		}
	}
	
	for(int i = 0; i < 5; i++){
		cout << "\n\nNombre: " << estudiantes[i].nombre;
		cout << "\nApellido: " << estudiantes[i].apellido;
		cout << "\nCurso: " << estudiantes[i].curso;
		cout << "\nCarnet: " << estudiantes[i].carnet;
		cout << "\nEdad: " << estudiantes[i].edad << " anios";	
	}
};
