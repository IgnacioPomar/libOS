﻿
#include <cstdio>
#include <Windows.h>

#include "SrvcEjemplo_pragmalib.h"

#include "WinSrvc.h"

#include "SrvcEjemplo.h"
#include "SrvcEjepmploServidorWeb.h"


#define WEB_SERVICE


/*
Esta función sería el punto de entrada si se usa /subsystem:Windows
int WinMain (HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{

}
*/


int main (int argc, char * argv [])
{
	//No es necesraio usar el template... pero a mi me simplifica código.
	//Bastaría con copiar/personalizar el contenido de la función srvcMain definida en WinSrvc.h

#ifdef WEB_SERVICE
	return srvcMain <SrvcEjepmploServidorWeb> (argc, argv);
#else#
	return srvcMain <SrvcEjemplo> (argc, argv);
#endif
}
