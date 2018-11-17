/*Hecho por KENY LISBETH CHAVEZ TORRES
CT18009*/

#include  <fstream> //permite la lectura de los archivos
#include <iostream>

using namespace std ;

int main ()
{
	char cadena [128]; //Cadena de carcateres que permite
	
	ofstream fs ("nombre.txt") ; //nombre del archivo
	fs<< "Hola Keny"<<endl; //lo que se guardara en el archivo
	fs.close(); //cerrar archivo
	cout << "archivo creado correctamente"; 
}
