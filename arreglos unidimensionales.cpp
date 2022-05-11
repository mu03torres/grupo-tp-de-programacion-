https://github.com/mu03torres/grupo-tp-de-programacion-.git
#include <iostream>
using namespace std; 
int main () {
	    int i;
	    int n;
		cout<<"/n ingrese la cant de valores" ;
		cin>>n;
	    int v[n];
	    
	    for(i=0;i<n;i++)//inicializacion 
	    {
	    	v[i]=0;
	    	
		}
	for(i=0;i<n;i++) // carga de datos
	{
		cout<<"/n ingrese el valor nro" <<i+1<< ":";
		cin>>v[i];
	}
	for (i=0;i<n;i++)// impresion de datos
	{
		cout<<"/n posicion:" <<i+1<< "valor: "<<v[i];
	}
	{
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
}