#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "Sort.h"

using namespace std;

int main(){

	Sort S1,S2;

	int i,dato,n;
	printf("numero elementos?\n");
	scanf("%d", &n);
	
	//insertar ordenados
	clock_t start = clock();
	for (int i = 0; i < n; i++){
		S1.insert(i);
	}
	printf("Tiempo en insertar '%d' elementos ordenados:  %f\n",n, ((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");
	//insertar desordenados
	start = clock();
	for (int i = 0; i < n; i++){
		dato = rand()% 100 + 1;
		S2.insert(dato);
	}
	printf("Tiempo en insertar '%d' elementos desordenados:  %f\n",n,((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");

	start = clock();
	printf("tamaño %d\n", S1.size());
	printf("Tiempo en consultar tamaño :  %f\n", ((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");

	start = clock();
	printf("minimo ordenado %d\n", S1.min());
	printf("Tiempo acceder al minimo con '%d' elementos ordenados:  %f\n", n,((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");
	start = clock();
	printf("minimo desordenado %d\n", S2.min());
	printf("Tiempo acceder al minimo con '%d' elementos desordenados:  %f\n", n,((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");
	//imprimir ordenados
	start = clock();
	while(S1.size() != 0){
		printf("%d ",S1.min());
		S1.remove();
	}printf("\n");
	printf("Tiempo remover los '%d' elementos ordenados:  %f\n", n,((double)clock() - start) / CLOCKS_PER_SEC);
	printf("\n");
	//imprimir desordenados
	start = clock();
	while(S2.size() != 0){
		printf("%d ",S2.min());
		S2.remove();
	}printf("\n");
	printf("Tiempo remover los '%d' elementos desordenados:  %f\n", n,((double)clock() - start) / CLOCKS_PER_SEC);
}