#include "BinaryTree.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct node{

		int data;
		struct node* right; 
		struct node* left; 
	};

BinaryTree::BinaryTree(){ 
	tam = 0;
	root = NULL;
}

BinaryTree::~BinaryTree(){
	
}

void BinaryTree::insert(int n){
	if(root == NULL){
	node *aux;
	aux = (node *) malloc(sizeof(node));

	aux->data = n;
	aux->left = NULL;
	aux->right = NULL;

	root = aux;
	}
	else{
		node *aux = root;
		while(1){
			
			if(aux->data <= n){
				if(aux->right == NULL){
					node *aux2 = (node *) malloc(sizeof(node));
					
					aux2->data = n;
					aux2->right = NULL;
					aux2->left = NULL;

					aux->right = aux2;
					break;	
				}
			aux = aux->right;
			}
	 		else{
		 		if(aux->left == NULL){
		 			node *aux2 = (node *) malloc(sizeof(node));
					
					aux2->data = n;
					aux2->right = NULL;
					aux2->left = NULL;

					aux->left = aux2;
					break;
		 		}
		 		aux = aux->left;
		 	}		 	
		}
	}
	tam++;
}

node* BinaryTree::search(int n){
	
	node *aux = root;
	while(1){
		if (aux->data < n){
			if(aux->right) aux = aux->right;
			else break;
		}

		else{
			if(aux->left != NULL) aux = aux->left;
			else break;
		}
		
		if(aux->data == n) return aux;
	}
	return NULL;	
}

int BinaryTree::size(){
	return tam;
}