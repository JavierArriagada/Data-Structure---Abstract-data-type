#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "LinkedList.hpp"
#include "ArrayList.hpp"

using namespace std;

int main(){

	srand(time(NULL));

	ListADT<char>  *l  = new LinkedList<char>();
	ListADT<int>  *l2  = new LinkedList<int>();
	ListADT<char>  *a  = new ArrayList<char>();
	ListADT<int>  *a2  = new ArrayList<int>();
	int tam = 30;

	for (int i = 0; i < tam; i++){ 
		l2 -> push_back(i);
	}
	for (int i = 0; i < tam; i++){ 
		a2 -> push_back(i);
	}

 	l -> push_back('g');
 	l -> push_back('a');
 	l -> push_back('t');
 	l -> push_back('a');
 	l -> push_back('c');
 	l -> push_back('a');

 	a -> push_back('g');
 	a -> push_back('a');
 	a -> push_back('t');
 	a -> push_back('a');
 	a -> push_back('c');
 	a -> push_back('a');
			
	for (int i = 0; i < l->size(); i++)
	{
		printf("%c ",l -> at(i) );
	}
	printf("\n");

	for (int i = 0; i < l2->size(); i++)
	{
		printf("%d ",l2 -> at(i) );
	}
	printf("\n"); 


	for (int i = 0; i < a->size(); i++)
	{
		printf("%c ",a -> at(i) );
	}
	printf("\n");

	for (int i = 0; i < a2->size(); i++)
	{
		printf("%d ",a2 -> at(i) );
	}
	printf("\n");




}

