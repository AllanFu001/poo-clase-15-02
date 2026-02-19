#include <iostream>
using namespace std;

class Persona {	
//Atributos

protected : 
string nombres, apellidos, direccion, fecha_nacimiento;
int telefono;
//Constructor
//Sobre carga de metodos, no podemos usar dos constructores iguales, debe tener algun valor distinto ej, la que usa string
Persona (){
}
Persona (string nom, string ape,string dir, int tel, string fn){
	nombres = nom;
	apellidos = ape;
	direccion = dir;
	telefono = tel;
	fecha_nacimiento = fn;
}

//Metoso Crud
void crear ();
void leer ();
void actualizar ();
void borrar ();




};
