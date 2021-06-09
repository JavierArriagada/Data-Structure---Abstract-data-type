#include "Deque.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

Deque::Deque(){
	tam = 0;
	Node *head = NULL;
	Node *tail = NULL;
}

Deque::~Deque(){
	while(head->prev != NULL){
		head = head->prev;
		free(head->next);
	}
	free(tail);
}

bool Deque::empty(){
	if(tam == 0) return 1;
	else return 0;
}

int Deque::size(){
	return tam;

}

int Deque::front(){
	if(tam==0) return 0;
	else return head->data;

}

int Deque::back(){
	if(tam==0) return 0;
	else return tail->data;
}

void Deque::push_front(int n){
	if(tam==0){
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));

		aux->data = n;
		aux->next = NULL;
		aux->prev = NULL;

		head = aux;
		tail = aux;
		tam++;

	}else{
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));

		aux->data = n;
		aux->next = NULL;
		aux->prev = head;

		head->next = aux;
		head = aux;
		tam++;
	}
}

void Deque::push_back(int n){
	if(tam==0){
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));

		aux->data = n;
		aux->next = NULL;
		aux->prev = NULL;

		head = aux;
		tail = aux;
		tam++;
	}else{
		Node *aux;
		aux = (Node *) malloc (sizeof (Node));

		aux->data = n;
		aux->next = tail;
		aux->prev = NULL;

		tail->prev = aux;
		tail = aux;
		tam++;

	}

}

void Deque::pop_front(){
	if(tam==0) return;
	else if(tam==1){
		free(head);
		head = NULL;
		tail = NULL;
		tam--;
	}
	else{
		head = head->prev;
		free(head->next);
		head->next = NULL;
		tam--;
	}

}

void Deque::pop_back(){
	if(tam==0) return;
	else if(tam==1){
		free(tail);
		head = NULL;
		tail = NULL;
		tam--;
	}
	else{
		tail = tail->next;
		free(tail->prev);
		tail->prev = NULL;
		tam--;
	}

}

void Deque::mostrar(){
	Node *aux;
	aux = (Node *) malloc(sizeof(Node));

	aux = head;

	printf("Deque\n");
	while(aux != NULL){
		printf("%d ", aux->data);
		aux = aux->prev;
	}
	printf("\n");

}