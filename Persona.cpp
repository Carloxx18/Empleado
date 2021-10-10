#include <iostream>
using namespace std;
class Persona{
	// atributos
	protected : string nombres,apellidos,direccion, puesto, pues;
				int telefono;
	// costructor
	protected : 
		Persona(){
		}
		Persona(string nom,string ape,string dir,int tel, string pues){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			puesto = pues;
		}
	
	// metodos
	void mostrar();
	
};
