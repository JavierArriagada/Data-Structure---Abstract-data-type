#include "LinkedStack.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

LinkedStack::LinkedStack(){ //constructor punteros a null
	tam = 0;
	Node *head = NULL;
	Node *tail = NULL;
}

LinkedStack::~LinkedStack(){
	
}

void LinkedStack::push(int n){
	//En el caso que el stack no tenga elementos
	if(tam == 0){
		//se crea puntero de auxiliar y se le asigna el tamaño para un Node 
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));
		
		aux->data = n;
		aux->next = NULL;

		head = aux; 	//head apuntara a la direccion del nuevo nodo
		tail = aux; 	//tail apuntara a la direccion del nuevo nodo
		tam++;
	}else{
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));
		
		aux->data = n;
		aux->next = NULL;
		//el puntero next del Nodo anterior apuntara al nuevo Nodo
		tail->next = aux;
		//puntero tail apunta a nuevo nodo
		tail = aux;
		//misma pregunta, que pasa con el puntero aux ??
		tam++;
	}

}

int LinkedStack::size(){
	printf("El tamaño de la ListaLigada es = %d\n", tam);
	return tam;

}

bool LinkedStack::empty(){
	if(tam == 0) return 1;
	else return 0;

}

int LinkedStack::top(){ //tail
	if(tam != 0){
		return tail->data;}
	else return 0;
}

void LinkedStack::pop(){
	if(tam != 0){ 
	
		free(tail);
		tail = (Node *) malloc(sizeof(Node));
		tail = head;
		for (int i = 0; i < tam-1; i++){
			tail = tail->next;
		}
		tail->next = NULL;
		tam--;
	}else return;
}