#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include "Queue.h"

using namespace std;


int main(){


	QueueADT *Q = new Queue();
	queue<int> q;
	int myint = 100000000;
	printf("tamaño cola : %d\n", myint);
	
	printf("\n");

	clock_t start_qpush = clock();
	for (int i = 0; i < myint; i++){
		q.push(i);
	}
	printf("Tiempo para push Queue STL %f\n",((double)clock() - start_qpush)/ CLOCKS_PER_SEC );
	
	clock_t start_Qpush = clock();
	for (int i = 0; i < myint; i++){
		Q->push(i);
	}
	printf("Tiempo para push Queue Stack %f\n",((double)clock() - start_Qpush)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_qfront = clock();
	q.front();
	printf("Tiempo para front Queue STL %f\n",((double)clock() - start_qfront)/ CLOCKS_PER_SEC );

	clock_t start_Qfront = clock();
	Q->front();
	printf("Tiempo para front Queue Stack %f\n",((double)clock() - start_Qfront)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_qback = clock();
	q.back();
	printf("Tiempo para back Queue STL %f\n",((double)clock() - start_qback)/ CLOCKS_PER_SEC );

	clock_t start_Qback = clock();
	Q->back();
	printf("Tiempo para back Queue Stack %f\n",((double)clock() - start_Qback)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_qpop = clock();
	q.pop();
	printf("Tiempo para pop Queue STL %f\n",((double)clock() - start_qpop)/ CLOCKS_PER_SEC );

	clock_t start_Qpop = clock();
	Q->pop();
	printf("Tiempo para pop Queue Stack %f\n",((double)clock() - start_Qpop)/ CLOCKS_PER_SEC );

	printf("\n");

	clock_t start_qsize = clock();
	printf("Tamaño Queue STL : %ld\n", q.size());
	printf("Tiempo para size Queue STL %f\n",((double)clock() - start_qsize)/ CLOCKS_PER_SEC );

	clock_t start_Qsize = clock();
	printf("Tamaño Queue Stack : %d\n", Q->size());
	printf("Tiempo para size Queue Stack %f\n",((double)clock() - start_Qsize)/ CLOCKS_PER_SEC );
}