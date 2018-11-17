/*Hecho por KENY LISBETH CHAVEZ TORRES
CT18009*/


#include <iostream>

using namespace std;

int main (){
	int vector [5];
	int i ;
	int j ;
	int temp;
	//llenado de vector
	for (i=0 ; i<=4 ; i++) {
		cout <<i+1<<":";
		cin >>vector[i];
		cout<<endl;
	}
	
		//metodo de la burbuja 
	for (i=0 ; i<=4 ; i++) 
	{
		for (j=i+1 ; j<=4 ; j++)
		{
			if (vector [j]<vector [i])
			{
				temp = vector [j];
				vector [j] = vector [i];
				vector [i] = vector [j];
				vector [i] = temp ;
			}
		}
	}
	for (i=0 ; i<=4 ; i++)
	{
		cout << vector [i] <<" " ;	
	}
	
}
