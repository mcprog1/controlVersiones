#ifndef VERSIONES_H
#define VERSIONES_H
#include <string>

enum retorno{
	OK, ERROR, NO_IMPLEMENTADA
};
typedef enum retorno TipoRet;

struct archivo{
	Cadena nombre = new char(50);
};
typedef archivo* Archivo;

struct linea{
	Cadena contenido = new char(5000);
	int numero_linea;
	linea* siguiente;
	linea* anteriror;
	Archivo* archivo;
};
typedef linea* Linea;

typedef char *Cadena;

Archivo crearArchivo(Cadena);





#endif
