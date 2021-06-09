#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <time.h>
#include "BinaryTree.h"

using namespace std;


int main(){

BinaryTreeADT *BT = new BinaryTree();
BinaryTreeADT *BT2 = new BinaryTree();
int dato,i;
clock_t start = clock();
for (i = 0; i < 100000; i++){
	dato = rand()% 1000 + 1;
	BT->insert(dato);
}
printf("Tiempo insertar numeros aleatorios %f\n",((double)clock() - start)/ CLOCKS_PER_SEC );

clock_t start_2 = clock();
for (i = 0; i < 100000; ++i){
	BT2->insert(i);
}
printf("Tiempo insertar numeros ordenados %f\n",((double)clock() - start_2)/ CLOCKS_PER_SEC );

printf("Tamaño arbol con numeros aleatorios : %d\n", BT->size());
printf("Tamaño arbol con numeros ordenados : %d\n", BT2->size());

clock_t start_s1 = clock();
if(BT->search(500) != NULL ){
	printf("Se encontro numero 500\n");
}else printf("No se encontro el numero 500\n");;
printf("Tiempo en encontrar arbol aleatorio %f\n",((double)clock() - start_s1)/ CLOCKS_PER_SEC );

clock_t start_s2 = clock();
if(BT2->search(500) != NULL ){
	printf("Se encontro numero 500\n");
}else printf("No se encontro el numero 500\n");;
printf("Tiempo en encontrar arbol ordenado %f\n",((double)clock() - start_s2)/ CLOCKS_PER_SEC );
	return 0; 
}