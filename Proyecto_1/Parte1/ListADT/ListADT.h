#ifndef LISTA_H
#define LISTA_H
using namespace std;

class ListADT {
	public:
	
	virtual void push_back(int n) = 0; //Agregar al final  ;  virtual permite que sea sobrecargable

	virtual int at(int n) = 0; //Acceder al n-ésimo elemento

	virtual int size() = 0; //Obtener su tamaño

	virtual void mostrar() = 0;
};

#endif /*LISTA_H*/