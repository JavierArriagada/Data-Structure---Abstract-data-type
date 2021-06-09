#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "ArrayList.h"

using namespace std;

int main(){
	
	srand(time(NULL));

	ListADT *a1 = new ArrayList();
	ListADT *a2 = new ArrayList();
	ListADT *a3	= new ArrayList();
	ListADT *a4	= new ArrayList();
	int input,tam,tam2,r,c,test;
	printf("Elegir un caso\n");
	printf( "1. n = m\n" );
	printf( "2. n/m = 1/2,  n=100000\n" );
	printf( "3. n/m = 1/4,  n=100000\n" );
	printf( "4. prueba mostrando arreglos, tamaños pequeños\n");
	scanf("%d", &input);
	switch(input){
		case 1:
			printf("Ingresar tamaño arreglo\n");
			scanf("%d", &c);
			tam = c;
			tam2 = tam;
			break;
		case 2:
			tam = 100000;
			tam2 = tam*2;
			break;
		case 3:
			tam = 100000;
			tam2 = tam*4;
			break;
		case 4:
			tam = 15;
			tam2 = tam*2;
			test = 1;
			break;	
	}

	//llenar 2 arrays con numeros aleatorios
	for (int i = 0; i < tam; i++){ 
		r = rand()% 100 + 1;
		a1 -> push_back(r);
	}
	for (int i = 0; i < tam2; i++){ 
		r = rand()% 100 + 1;
		a2 -> push_back(r);
	}
	//ordenar ambos array
	a1->sort(0, a1->size()-1);
	a2->sort(0, a2->size()-1);
	//mostrar ambos array para verificar en consola
	if(test == 1){
		a1->mostrar();
		a2->mostrar();
	}
	//version 1 de interseccion de listas usando Arraylist
	clock_t start_1 = clock();	
	int i = 0;
	int j = 0;
	while( i < a1->size() ||  j < a2->size() ){
		if(i == a1->size() || j == a2->size() ){
				break;
			}
		
		if( ( a1->at(i) == a2->at(j)) & (a3->at( a3->size()-1) != a2->at(j) ) ){
			
			a3->push_back(a1->at(i));
			i++;
			j++;
			
		}
		else if(a1->at(i) < a2->at(j)){
			i++;
		}
		else{
			j++;
			
		}
	}
	if(test == 1){
		printf("\nversion 1\n");
		a3->mostrar();
	}
	printf("Tiempo en interseccion version1 %f\n", ((double)clock() - start_1)/ CLOCKS_PER_SEC );
	
	//version 2, interseccion listas usando Arraylist con busqueda binaria
	clock_t start_2 = clock();		
	if(a2->size() <= a1->size())
	{

		for (int i = 0; i < a2->size(); i++){
		
			if(a1->binariaIterativa(a2->at(i)) != -1){
		
				if(a4->at(a4->size()-1) != a2->at(i)){
				a4->push_back(a2->at(i));
				}
			}
		}

	}
	else
	{
		for (int i = 0; i < a1->size(); i++){
		
			if(a2->binariaIterativa(a1->at(i)) != -1){
		
				if(a4->at(a4->size()-1) != a1->at(i)){
				a4->push_back(a1->at(i));
				}
			}
		}

	}
	
	if(test == 1){
		printf("\nversion 2\n");
		a4->mostrar();  
	}
	printf("Tiempo en interseccion version2 %f\n", ((double)clock() - start_2)/ CLOCKS_PER_SEC );

}

