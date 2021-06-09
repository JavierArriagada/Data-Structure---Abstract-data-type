#include <iostream>
#include "ArrayList.h"
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

ArrayList::ArrayList(){ 						//constructor
	tam=0;
	max=10;
	arreglo = (int*) malloc(max*sizeof(int)); 	 
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
	//printf("El tamaño de la ArrayList es = %d\n", tam);
	return tam;
}

int ArrayList::at(int n){						//devuelve el elemento que esta en la n-esima posicion
	//printf("El elemento en la posicion L[%d] = %d\n",n, arreglo[n]);						
	return arreglo[n];
}

void ArrayList::mostrar(){
	printf("ArrayList\n");
		for (int i = 0; i < tam; i++){
			printf("%d ", arreglo[i]);
		}

	printf("\n");
	
}

int	ArrayList::lineal(int n){	
	for(int i = 0; i < tam; ++i){
		if(arreglo[i] == n) {
		//printf("Se encontro el numero %d en la posicion V[%d]\n", n, i);
		return i;
		}
		
	}//printf("No se ha encontrado el elemento %d\n", n);
	return 0;

}

		
int ArrayList::binariaRecursiva(int N,int l, int r){
	int m = (l+r)/2;
	if(l>r){ 
		//printf("No se ha encontrado el elemento %d\n", N);
		return -1;
	}
  	if(N == arreglo[m]){
  	//printf("Se encontro el numero %d en la posicion V[%d]\n", N, m);
  	return m;
  	}
  	if(N < arreglo[m]) binariaRecursiva(N, l, m-1);
  	if(N > arreglo[m]) binariaRecursiva(N, m+1, r);

}

		
int ArrayList::binariaIterativa(int n){
	int inf = 0;
	int sup = tam-1;
	int mid;
				
	while(inf <= sup){
		mid = ((sup-inf)/2) + inf;
		if(arreglo[mid] == n){
			//printf("Se encontro el numero %d en la posicion V[%d]\n",n,mid);
			
			return mid;
		}
		else if(n < arreglo[mid]) 	sup = mid-1;
		else						inf = mid+1;

	}
	//printf("No se ha encontrado el elemento %d\n", n);
	
	return -1;

}

int ArrayList::exponential_search(int size, int key){

	if (arreglo[0] == key) {					//raro
        printf("Se encontro el numero %d en la posicion V[0]\n",key);
        return -1;

    }

    int bound = 1;
    	while (bound < size && arreglo[bound] <= key){
        bound *= 2;
    }
    
    return binariaRecursiva(key, bound/2, min(bound, size));

}

void ArrayList::sort(int start, int end){
    int pivot;
 
    if (start < end) {
        pivot = divide(start, end);
 
        // Ordeno la lista de los menores
        sort(start, pivot - 1);
 
        // Ordeno la lista de los mayores
        sort(pivot + 1, end);
    }
}

int ArrayList::divide(int start, int end) {
    int left;
    int right;
    int pivot;
    int temp;
 
    pivot = arreglo[start];
    left = start;
    right = end;
 
    // Mientras no se cruzen los índices
    while (left < right) {
        while (arreglo[right] > pivot) {
            right--;
        }
 
        while ((left < right) && (arreglo[left] <= pivot)) {
            left++;
        }
 
        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = arreglo[left];
            arreglo[left] = arreglo[right];
            arreglo[right] = temp;
        }
    }
 
    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = arreglo[right];
    arreglo[right] = arreglo[start];
    arreglo[start] = temp;
 
    // La nueva posición del pivot
    return right;
}