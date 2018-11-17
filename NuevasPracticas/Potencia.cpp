/*hecho por Keny Lisbeth, Chavez Torres
CT18009////////// 30-10-2018*/
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

float pow_(float a, float b); //funcion para la raiz cuadrada


int main (){
	
	cout << pow(2,2); //valor de la raiz
	
	return 0;
	system ("pause");
}

float pow_(float a, float b){ //lo que hara la funcion
	float resultado = a ; 
	
	if (b == 0){ //si el valor de b es 0 retorna el valor de 1 
		return 1;
	}
	for (int i =1  ; i < b ; i++ ){
		resultado = resultado * a ;
	}
	
}
