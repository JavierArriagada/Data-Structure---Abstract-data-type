#include <iostream>
#include <cstdio>
#include <time.h>
#include <stdlib.h>


using namespace std;
/*programa que escanea n numeros y los almacena en un array A, Luego copia el primer elemento
en un array sum y los siguientes son la sum[i] = sum[i-1] + A[i]*/

int main(){

clock_t start= clock(); //contador tiempo

int n=10000;
int A[n], sum[n]; //se declaran arrays de tamaño n
	for (int i = 0; i < n; i++) scanf("%d", &A[i]); //bucle para agregar numeros al array A
	sum[0] = A[0]; //primer elemento de sum igual al primer elemento de A
	for (int i = 1; i < n; i++){ //bucle para llenar el array sum con el algoritmo nuevo
		sum[i]= sum[i-1] + A[i];
		
	}

	/*for (int j = 0; j < n; j++){ //mostrar arrays
		printf("A[%d]=%d ", j, A[j]);
		printf("sum[%d]=%d ",j,sum[j]);
		printf("\n");
	}*/
	printf("Tiempo ejecucion %f segundos\n",((double)clock() - start) / CLOCKS_PER_SEC);
}

//complejidad O(n), al no tener doble for solo es n