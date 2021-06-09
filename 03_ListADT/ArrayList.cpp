#include <iostream>
#include "ArrayList.h"
#include <cstdlib>
#include <cstdio>

using namespace std;

ArrayList::ArrayList(){ 						//constructor
	tam=0;
	max=10;
	arreglo = (int*) malloc(max*sizeof(int)); 	/*pide memoria para el arreglo dinamico 
												sizeof(int) = tamaño de 1 entero, multiplicado por la cantidad que queremos que tenga el array*/
}

ArrayList::~ArrayList(){						//liberar memoria reservada para el arreglo dinamico
	free(arreglo);
}

void ArrayList::push_back(int n){				//inserta elementos al final del array
	if(tam == max){ 							//si el tamaño es igual a la cantidad reservada, se hace un realloc para reservar el doble
		max = max*2;
		arreglo = (int*) realloc(arreglo, max*sizeof(int));
	}
	arreglo[tam] = n; 							//el elemento nuevo se inserta al final del arreglo
	tam++; 										//cada vez que se agrege 1 elemento con el metodo push_back el tamaño aumenta en 1
}

int ArrayList::size(){							//retorna size que es el contador asociado al tamaño del arreglo
	printf("El tamaño de la ArrayList es = %d\n", tam);
	return 0;
}

int ArrayList::at(int n){						//devuelve el elemento que esta en la n-esima posicion
	printf("El elemento en la posicion L[%d] = %d\n",n, arreglo[n]);						
	return 0;
}

void ArrayList::mostrar(){
	printf("ArrayList\n");
	for (int i = 0; i < tam; i++){
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}