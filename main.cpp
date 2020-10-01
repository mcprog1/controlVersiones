#include<iostream>
#include "versiones.hpp"
#include <cstdio>
#include <cstring>
#include "String.h"
using namespace std;

int main (int argc, char *argv[]) {
	/*========Variables========*/
	Cadena cmd;
	
	/*========Uso de funciones/procedimientos========*/
	menu();
//	gets(cmd);
	lecturaComando(cmd);
	
	
	return 0;
}

