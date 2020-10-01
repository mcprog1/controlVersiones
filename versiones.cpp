#ifndef VERSIONES_CPP
#define VERSIONES_CPP
#include "versiones.hpp"
#include<iostream>
#include <string>
using namespace std;

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




#endif
