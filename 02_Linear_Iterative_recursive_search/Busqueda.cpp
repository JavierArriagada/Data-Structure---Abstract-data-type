#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm> //libreria sort
#include "Busqueda.h"

using namespace std;

Busqueda::Busqueda(int n){
	srand(time(NULL));
	for (int i = 0; i < n; i++){
		int r = rand()% 100 + 1;
		myvector.push_back(r);
	}
	sort(myvector.begin(),myvector.end());
}

int Busqueda::lineal(int n){
	
	for(int i = 0; i < myvector.size(); ++i){
		if(myvector[i] == n) {
		printf("Se encontro el numero %d en la posicion V[%d]\n", n, i);return 0;
		}
		
	}printf("No se ha encontrado el elemento %d\n", n);
	return 0;
}

void Busqueda::binariaRecursiva(int N,int l, int r){ // n= numerobuscar  l=limiteizquierdo r=limitederecho
	int m = (l+r)/2;
	//casos base
	if(l>r){ 
		printf("No se ha encontrado el elemento %d\n", N);
		return;
	}
  	if(N == myvector[m]){
  	printf("Se encontro el numero %d en la posicion V[%d]\n", N, m);
  	return;
  	}
  	if(N < myvector[m]) binariaRecursiva(N, l, m-1);
  	if(N > myvector[m]) binariaRecursiva(N, m+1, r);

  
}

int Busqueda::binariaIterativa(int n){//numero a buscar
	int inf = 0;
	int sup = myvector.size()-1;
	int mid;
			
	while(inf <= sup){
		mid = ((sup-inf)/2) + inf;
		if(myvector[mid] == n){
		printf("Se encontro el numero %d en la posicion V[%d]\n",n,mid);return 0;
		}
		else if(n < myvector[mid]) 	sup = mid-1;
		else						inf = mid+1;

	}
	printf("No se ha encontrado el elemento %d\n", n);
	
	return 0;
}
int Busqueda::printv(){
	printf("El vector es\nV:[ ");
	for (int i = 0; i < myvector.size(); i++)
	{
		printf("%d ", myvector[i]);
	}
	printf("]\n");
}