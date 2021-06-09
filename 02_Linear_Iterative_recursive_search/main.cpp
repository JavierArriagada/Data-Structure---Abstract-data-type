#include <iostream>
#include <cstdio>
#include <algorithm> //libreria sort
#include <vector>
#include "Busqueda.h"

using namespace std;

int main() {
	int a,n;
	cout << "ingresar tamaño vector" << endl;
	scanf("%d", &n);
	cout << "ingresar numero a buscar" << endl;
	scanf("%d", &a);

	Busqueda c(n); //crea objeto tipo busqueda con nombre c
	
	c.lineal(a);  
	c.binariaIterativa(a);
	c.binariaRecursiva(a,0,n-1);

	c.printv(); //despliega el vector
}
