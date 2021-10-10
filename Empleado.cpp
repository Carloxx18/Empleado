#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	private : string cod;
	public :
		Empleado(string nom,string ape,string dir,int tel, string pues) : Persona(string pues){ 
  cod= c;
  }
	void setCode(string c){code=c;}
  	void setPuesto(string puesto){puesto=pues;}
  	
	string getCode(){	return cod;}
  string getPuesto(){	return puesto;}
  
  void mos(){
	cout<<"______________________"<<endl;
	cout<<cod<<","<<puesto<<endl;
}
};
