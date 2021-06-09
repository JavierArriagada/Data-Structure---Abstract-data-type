#include "ListADT.h"
using namespace std;

class ArrayList : public ListADT{
	
	private: //ArrayList tiene arreglo dinamico
		int *arreglo;
		int tam;
		int max;//tamaño inicial a la estructura
	
	public:
		ArrayList();//constructor
		//ArrayList(int);//constructor que recibe el tamaño maximo en la variable int max
		~ArrayList();//destructor
		int at(int n);
		int size();
		void push_back(int n);
		void mostrar();
		int	lineal(int n);
		int binariaRecursiva(int N,int l, int r);
		int binariaIterativa(int n);
		
		void sort(int, int);
		int divide(int, int); 
		int exponential_search(int, int); 
};