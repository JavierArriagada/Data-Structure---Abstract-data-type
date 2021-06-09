#include <iostream>
#include "ArrayList.h"
#include <cstdlib>
#include <cstdio>

using namespace std;

ArrayList::ArrayList(){ 						
	tam=0;
	max=10;
	arreglo = (int*) malloc(max*sizeof(int)); 	
}

ArrayList::~ArrayList(){						
	free(arreglo);
}

void ArrayList::push_back(int n){				
	if(tam == max){ 							
		max = max*2;
		arreglo = (int*) realloc(arreglo, max*sizeof(int));
	}
	arreglo[tam] = n; 
	tam++						
}

int ArrayList::size(){							
	printf("El tamaño de la ArrayList es = %d\n", tam);
	return tam;
}

int ArrayList::at(int n){						
	printf("El elemento en la posicion L[%d] = %d\n",n, arreglo[n]);						
	return arreglo[n];
}

void ArrayList::mostrar(){
	printf("ArrayList\n");
	for (int i = 0; i < tam; i++){
		printf("%d ", arreglo[i]);
	}
	printf("\n");
}