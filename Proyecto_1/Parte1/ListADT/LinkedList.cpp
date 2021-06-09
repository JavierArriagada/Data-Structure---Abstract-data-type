#include "LinkedList.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

LinkedList::LinkedList(){ //constructor punteros a null
	tam = 0;
	Node *head = NULL;
	Node *tail = NULL;
}

LinkedList::~LinkedList(){
	
}

void LinkedList::push_back(int n){
	//En el caso que la lista no tenga elementos
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

int LinkedList::at(int n){
	
	Node *aux;
	aux = (Node *) malloc(sizeof(Node)); //puntero tipo Node auxiliar

	aux = head;

	for (int i = 0; i < n; i++){
		aux = aux->next;
	}

	printf("El elemento en la posicion L[%d] = %d\n",n, aux->data);
	return aux->data;

	
}

int LinkedList::size(){
	printf("El tamaño de la ListaLigada es = %d\n", tam);
	return tam;
}

void LinkedList::mostrar(){
	Node *aux;
	aux = (Node *) malloc(sizeof(Node));

	aux = head;

	printf("Listaligada\n");
	while(aux != NULL){
		printf("%d ", aux->data);
		aux = aux->next;
	}
	printf("\n");
}