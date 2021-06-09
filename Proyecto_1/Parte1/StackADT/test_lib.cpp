#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "LinkedStack.h"

using namespace std;

int main(){

	srand(time(NULL));

	StackADT *s = new LinkedStack();
	 

	int taman = (rand()% 30) +1;
	

	if(s->empty()){
		printf("Esta vacio\n");
	}else printf("No esta vacia\n");

	for (int i = 0; i < taman; i++){ 
		int r = rand()% 100 + 1;
		s -> push(r);
	}

 	
	int t = rand()% taman;

	while(t == taman){
		t = rand()% taman;
	}
	printf("tamaño %d\n",taman );	
	s->size();
	
	if(s->empty()){
		printf("Esta vacio\n");
	}else printf("No esta vacia\n");
		
	s->pop();

		
	s->size();

	s->pop();
	s->pop();

		
	s->size();




}
