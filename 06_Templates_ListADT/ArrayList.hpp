#include "ListADT.h"
#include <bits/stdc++.h>

using namespace std;

template<typename T>
class ArrayList : public ListADT<T>{ 
	
	private: 
		T *arreglo;
		int tam;
		int max;
	
	public:
		ArrayList();		
		~ArrayList();
		T at(int n);
		int size();
		void push_back(T n);
};

template<typename T>
ArrayList<T>::ArrayList(){ 						
	tam = 0;
	max = 10;
	arreglo = (T*) malloc(max*sizeof(T)); 	
}

template<typename T>
ArrayList<T>::~ArrayList(){						
	free(arreglo);
}

template<typename T>
void ArrayList<T>::push_back(T n){				
	if(tam == max){ 							
		max = max*2;
		arreglo = (T*) realloc(arreglo, max*sizeof(T));
	}
	arreglo[tam] = n; 							
	tam++; 										
}

template<typename T>
int ArrayList<T>::size(){		
	return tam;
}

template<typename T>
T ArrayList<T>::at(int n){					
	return arreglo[n];
}

