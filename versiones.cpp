#ifndef VERSIONES_CPP
#define VERSIONES_CPP
#include "versiones.hpp"
#include<iostream>
#include <string>
using namespace std;


/*========Menu========*/
void menu(){
	cout<<"CrearArchivo"<<endl;
	cout<<"InsertarLinea"<<endl;
	cout<<"MostrarTexto"<<endl;
	cout<<"BorrarArchivo"<<endl;
	cout<<"BorrarLinea"<<endl;
	cout<<"Salir"<<endl;
}
/*========LecturaComando========*/
void lecturaComando(Cadena cmd){
	/*switch(cmd)
	{
		case 'salir':
			break;
		case 'creararchivo':
			
			break;
		case 'insertarlinea':
			break;
		case 'mostrartexto':
			break;
		case 'borrararchivo':
			break;
		case 'borrarlinea':
			break;
	}*/
}
/*========CrearArchivo========*/
Archivo crearArchivo(Cadena nombre,Linea linea){
	Archivo arch = new archivo;
	if(arch)
	{
		arch->name = nombre;
		arch->lineas = linea;
		return arch;
	}else{
		return NULL;
	}
}

/*========InsertarLinea========*/




/*========MostrarTexto========*/




/*========BorrarArchivo========*/



/*========BorrarLinea========*/

#endif
