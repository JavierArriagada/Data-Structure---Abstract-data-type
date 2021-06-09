#include "PRQuadTreeADT.h"

class ArregloQuadTree : public PRQuadTreeADT{
	public:
		/*
		Constructor de la clase ArregloChanta resive un 'x' e 'y'
		que señalan el largo maximo del arreglo que creara con 
		memoria dinamica.
		*/
		ArregloQuadTree(int x,int y);
		/*
		Destructor de la clase ArregloChanta
		elimina el arreglo dinamico que creo el constructor.
		*/
		~ArregloQuadTree();
		/*
		Método inserta en el arreglo un punto dado, las posicion par para un 'x' y su 
		posición contigua que es impar el 'y' del punto ingresado, retornando true.
		Si se intenta insertar un punto mayor al rango de la región retorna false.
		*/
		int insertar(int x,int y);
		/*
		Método que busca el punto si existe en el arreglo de existir lo cambia con las última 
		dos posiciones, disminuye el tamaño en 2 del arreglo y retorna true, de no estar
		el punto retorna false.
		*/
		bool borrar(int x,int y);
		/*
		Método que busca en el arreglo un punto (x,y) de encontrarse retorna true, de no 
		estar retorna false.
		*/
		bool buscar(int x,int y);
		/*
		Método que devulve la cantidad de puntos insertados en la region.
		*/
		int size();
		/*
		Este que esta se chupa un huevo.
		*/
		NodeQuad* laraiz();
	private:
		/*
		Variable que guarda la cantidad de puntos ingresados.
		*/
		int tam;
		/*
		Arreglo dinamico que se le dara el tamaño en el constructor
		de la clase.
		*/
		int *arr;
		/*
		variable que guarda el tamaño maximo del arreglo
		para poder comprarar si el punto exede o no el maximo
		de este.
		*/
		int max;

		int maxTotal;
};