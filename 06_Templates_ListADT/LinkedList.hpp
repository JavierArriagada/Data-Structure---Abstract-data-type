#include "ListADT.h"
#include <bits/stdc++.h>

using namespace std;

template<typename T>
class LinkedList:public ListADT<T>{ 
	
typedef struct Node{	
		T data;
		Node* next;
	}Node;

private:
		int tam;
		Node *head;
		Node *tail;

	public:
		LinkedList();
		~LinkedList();
		T at(int n);
		int size();
		void push_back(T n);
		
};


template<typename T>
LinkedList<T>::LinkedList(){ 
	tam = 0;
	Node *head = NULL;
	Node *tail = NULL;
}

template<typename T>
LinkedList<T>::~LinkedList(){
	
}
template<typename T>

void LinkedList<T>::push_back(T n){
	if(tam == 0){
		
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));
		
		aux->data = n;
		aux->next = NULL;

		head = aux; 	
		tail = aux; 	
		tam++;
	}else{
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));
		
		aux->data = n;
		aux->next = NULL;
		
		tail->next = aux;
		
		tail = aux;
		
		tam++;
	}

}

template<typename T>
T LinkedList<T>::at(int n){
	
	Node *aux;
	aux = (Node *) malloc(sizeof(Node)); 
	aux = head;

	for (int i = 0; i < n; i++){
		aux = aux->next;
	}
	return aux->data;

	
}

template<typename T>
int LinkedList<T>::size(){	
	return tam;
}