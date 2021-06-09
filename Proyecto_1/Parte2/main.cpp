#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include "ArrayList.h"


using namespace std;

int main(){

	srand(time(NULL));
	ListADT *a = new ArrayList();
	int input,c,tama,r,t;

	printf("elegir opcion\n");
	printf("1. Se tomarán tiempos de búsqueda de elementos aleatorios \n");
	printf("2. Los elementos buscados siempre se encuentran entre los primeros (10 porsiento).\n");
	printf("3. Los elementos buscados siempre son mayores que el mayor de los elementos.\n");
	scanf("%d", &input); 
	switch(input){
		case 1:
			printf("ingrese tamaño arreglo\n");
			scanf("%d", &c);
			tama = c;
			t = rand()% tama;
			while(t == tama){
				t = rand()% tama;
			}
		break;

		case 2:
			tama = 100000000;
			t = rand()% tama*0.1;
			break;

		case 3:
			tama = 100000000;
			t = tama + 1;
		break;
	}

	for (int i = 0; i < tama; i++){ 
		r = rand()% tama;  
		a -> push_back(r);
	}

	clock_t start_sort = clock();
	a->quicksort(0, tama-1);
	printf("Tiempo en ordenar %f\n", ((double)clock() - start_sort)/ CLOCKS_PER_SEC );
	
	//a -> mostrar();
	a->size();
	printf("\n");
	
	printf("lineal\n");
	clock_t start_lin = clock();
	a -> lineal(t);
	printf("Tiempo %f\n", ((double)clock() - start_lin)/ CLOCKS_PER_SEC );
	printf("\n");
	
	printf("binariaRecursiva\n");
	clock_t start_birec = clock();
	a -> binariaRecursiva(t,0,tama-1);
	printf("Tiempo %f\n", ((double)clock() - start_birec)/ CLOCKS_PER_SEC );
	printf("\n");

	printf("binariaIterativa\n");
	clock_t start_binit = clock();
	a -> binariaIterativa(t);
	printf("Tiempo %f\n", ((double)clock() - start_binit)/ CLOCKS_PER_SEC );
	printf("\n");

	clock_t start_exp = clock();
	printf("exponential_search\n");
	a -> exponential_search(tama,t);
	printf("Tiempo %f\n", ((double)clock() - start_exp)/ CLOCKS_PER_SEC );

	return 0;
}


