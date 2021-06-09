#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include "Deque.h"

using namespace std;

int main(){

	srand(time(NULL));

	DequeADT *d = new Deque();
	deque<int> D;




	int tam = 10000000;
	int r;
	printf("\n");
	clock_t start_pfADT = clock();
	for (int i = 0; i < tam; i++){
		r = rand()% 100 + 1;
		d -> push_front(r);
	}
	printf("Tiempo push_front ADT %f\n",((double)clock() - start_pfADT)/ CLOCKS_PER_SEC );
	clock_t start_pfSTL = clock();
	for (int i = 0; i < tam; i++){
		r = rand()% 100 + 1;
		D.push_front(r);
	}
	printf("Tiempo push_front STL %f\n",((double)clock() - start_pfSTL)/ CLOCKS_PER_SEC );
	
	printf("\n");
	
	clock_t start_pbADT = clock();
	for (int i = 0; i < tam; i++){ 
		r = rand()% 100 + 1;
		d -> push_back(r);
	}
	printf("Tiempo push_back ADT %f\n",((double)clock() - start_pbADT)/ CLOCKS_PER_SEC );
	clock_t start_pbSTL = clock();
	for (int i = 0; i < tam; i++){
		r = rand()% 100 + 1;
		D.push_back(r);		
	}
	printf("Tiempo push_back STL %f\n",((double)clock() - start_pbSTL)/ CLOCKS_PER_SEC );
	
	printf("\n");

	clock_t start_sizeADT = clock();
	printf("tamaño deque ADT %d\n", d->size());
	printf("Tiempo size ADT %f\n",((double)clock() - start_sizeADT)/ CLOCKS_PER_SEC );
	clock_t start_sizeSTL = clock();
	printf("tamaño deque STL %d\n", d->size());
	printf("Tiempo size STL %f\n",((double)clock() - start_sizeSTL)/ CLOCKS_PER_SEC );
	
	printf("\n");

	clock_t start_pbkADT = clock();
	d->pop_back();
	printf("Tiempo pop_back ADT %f\n",((double)clock() - start_pbkADT)/ CLOCKS_PER_SEC );
	clock_t start_pbkSTL = clock();
	D.pop_back();
	printf("Tiempo pop_back STL %f\n",((double)clock() - start_pbkSTL)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_pfrADT = clock();
	d->pop_front();
	printf("Tiempo pop_back ADT %f\n",((double)clock() - start_pfrADT)/ CLOCKS_PER_SEC );
	clock_t start_pfrSTL = clock();
	D.pop_front();
	printf("Tiempo pop_back STL %f\n",((double)clock() - start_pfrSTL)/ CLOCKS_PER_SEC );
	
	printf("\n");
	//d->mostrar();
	clock_t start_frADT = clock();
	printf("front ADT %d\n", d->front());
	printf("Tiempo front ADT%f\n",((double)clock() - start_frADT)/ CLOCKS_PER_SEC );
	clock_t start_frSTL = clock();
	printf("front STL %d\n", D.front());
	printf("Tiempo front STL%f\n",((double)clock() - start_frSTL)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_bckADT = clock();
	printf("back ADT %d\n", d->back());
	printf("Tiempo back ADT%f\n",((double)clock() - start_bckADT)/ CLOCKS_PER_SEC );
	clock_t start_bckSTL = clock();
	printf("back STL %d\n", D.back());
	printf("Tiempo back ADT%f\n",((double)clock() - start_bckSTL)/ CLOCKS_PER_SEC );
	
	printf("\n");

	printf("tamaño deque ADT %d\n", d->size());
	printf("tamaño deque STL %lu\n", D.size());



}