#include <bits/stdc++.h>
#include "PQHeap.h"
#include "PQUnsorted.h"
using namespace std;
void Heap_Sort(vector<int> a){
	//arreglar la parte de los ultimo nodos
	PriorityQueueADT *zelot = new PQHeap();
	for(int i=0;i<a.size();i++){
		zelot->push(a[i]);
	}
	int aux=zelot->size();
	for(int i=0;i<aux;i++){
		//cout<<zelot->top()<<"-";
		zelot->pop();
	}
	cout<<endl;
}
void Selection_Sort(vector<int> b){
	PriorityQueueADT *marine = new PQUnsorted();
	for(int i=0;i<b.size();i++){
		marine->push(b[i]);
	}
	int aux=marine->size();
	for(int i=0;i<aux;i++){
		//cout<<marine->top()<<"-";
		marine->pop();
	}
	cout<<endl;
}

int main(){
	PriorityQueueADT *marine = new PQUnsorted();
	PriorityQueueADT *zelot = new PQHeap();
	vector<int> a;
	vector<int> b;
	unsigned t0,t1,t2,t3;
	srand(time(NULL));
	for(int i=0;i<30000;i++){
		a.push_back(rand()%10000);
		b.push_back(rand()%10000);
	}
	
	/*
	//A probar las cosas.
	marine->push(45);
	marine->push(5);
	marine->push(6);
	marine->push(15);
	marine->push(4);

	zelot->push(45);
	zelot->push(5);
	zelot->push(6);
	zelot->push(15);
	zelot->push(4);
	//zelot->push(3);
	marine->ver();
	cout<<endl;
	zelot->ver();
	cout<<endl;
	cout<<"tamaño de marine:::"<<marine->size()<<endl;
	cout<<"tamaño de marine:::"<<zelot->size()<<endl; 
	cout<<"top de marine:::"<<marine->top()<<endl;
	cout<<"top de zelot:::"<<zelot->top()<<endl;
	marine->pop();
	zelot->pop();
	cout<<endl;
	cout<<"tamaño de marine:::"<<marine->size()<<endl;
	cout<<"tamaño de marine:::"<<zelot->size()<<endl;
	cout<<"top de marine:::"<<marine->top()<<endl;
	cout<<"top de zelot:::"<<zelot->top()<<endl;
	marine->pop();
	zelot->pop();
	cout<<endl;
	cout<<"tamaño de marine:::"<<marine->size()<<endl;
	cout<<"tamaño de marine:::"<<zelot->size()<<endl;
	cout<<"top de marine:::"<<marine->top()<<endl;
	cout<<"top de zelot:::"<<zelot->top()<<endl;
	marine->pop();
	zelot->pop();
	cout<<endl;
	cout<<"tamaño de marine:::"<<marine->size()<<endl;
	cout<<"tamaño de marine:::"<<zelot->size()<<endl;
	cout<<"top de marine:::"<<marine->top()<<endl;
	cout<<"top de zelot:::"<<zelot->top()<<endl;
	*/
	cout<<endl;
	t0=clock();
	Heap_Sort(a);
	t1=clock();
 	double time=(double(t1-t0)/CLOCKS_PER_SEC);
 	cout <<  "Execution Time 1-: " << time << endl;
	cout<<endl;
	t2=clock();
	Selection_Sort(b);
	t3=clock();
 	double time2=(double(t3-t2)/CLOCKS_PER_SEC);
 	cout <<  "Execution Time 2-: " << time2 << endl;
	cout<<endl;
}
