#ifndef VERSIONES_H
#define VERSIONES_H
#include <string>

enum retorno{
	OK, ERROR, NO_IMPLEMENTADA
};
typedef enum retorno TipoRet;

struct archivo{
	char* name;
	struct linea *lineas;
};
typedef archivo* Archivo;

struct linea{
	char contenido;
	int numero_linea;
	linea* siguiente;
};
typedef linea* Linea;

typedef char* Cadena;

Archivo crearArchivo(Cadena,Linea);





#endif
