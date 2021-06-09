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

int A[n], sum[n];
for (int i = 0; i < n; i++){//bucle para scanear n numeros
	scanf("%d", &A[i]);
}

for (int i = 0; i < n; i++){//primer bucle, cada vez que el primer ciclo itere, aux = 0
	int aux = 0;
	for (int j = 0; j <= i; j++){//segundo bucle sobre el primer bucle, le suma a aux el valor array A
		aux += A[j];
	}
	sum[i]= aux;//llena el array sum con el valor de aux

	
}
/*for (int j = 0; j < n; j++){ //mostrar arryais
		printf("A[%d]=%d ", j, A[j]);
		printf("sum[%d]=%d ",j,sum[j]);
		printf("\n");
	}*/ 
printf("Tiempo ejecucion %f segundos\n",((double)clock() - start) / CLOCKS_PER_SEC);
}

//complejidad O(n²), basicamente por el doble for