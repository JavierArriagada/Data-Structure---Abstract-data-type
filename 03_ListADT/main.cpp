#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "ArrayList.h"
#include "LinkedList.h"

using namespace std;

int main(){

	srand(time(NULL));

	ListADT *l = new LinkedList();
	ListADT *a = new ArrayList(); 

	int tam = rand()% 30;

	for (int i = 0; i < tam; i++){ 
		int r = rand()% 100 + 1;
		a -> push_back(r);
	}

	for (int i = 0; i < tam; i++){ 
		int r = rand()% 100 + 1;
		l -> push_back(r);
	}
 	
	int t = rand()% tam;

	while(t == tam){
		t = rand()% tam;
	}
	a -> mostrar();
	printf("\n");
	a -> size(); 
	a -> at(t);
	printf("\n\n");
	l -> mostrar();
	printf("\n");
	l -> size(); 
	l -> at(t); 

}

