#include "ListADT.h"
using namespace std;

class ArrayList : public ListADT{ //hereda metodos publicos de ListADT 
	
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
};