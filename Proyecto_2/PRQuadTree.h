#include "PRQuadTreeADT.h"

class PRQuadTree : public PRQuadTreeADT{
	public:
		/*
		Constructor de la clase PRQuadTree
		recibe un x que representa el máximo de columnas y
		recibe un y que representa el máximo de filas.
		*/
		PRQuadTree(int x, int y);
		/*
		Destructor de la clase PRQuadTree, elimina hoja por hoja.
		*/
		~PRQuadTree();
	    /*
		Método para insertar un punto en un nodo(que representa un espacio) en su respectivo 
		cuadrante disponible. Utiliza un sistema de banderas para ubicar el punto dado.
		Si el nodo en x e y es (-2,-2) para decir que se puede insertar dado que es un hoja,(-1,-1) 
		indica que es una rama para avanzar en su cuadrante respectivo,(>=0,>=0) un punto lo transforma en rama,
		entonces crea nuevas sub-regiones(SE,SW,NE,NW), las nuevas sub-regiones apuntan a la región que 
		contiene a las 4,reubicar el punto ya existente, ubicar el punto nuevo. Si ya existe el punto 
		retorna una excepción 
		*/
		int insertar(int x,int y);//,NodeQuad *n
		/*
		Método que dado un punto para borrar, busca desde la raiz a que cuadrante o 
		sub-cuadrante pertenece y una vez encontrado cambia sus valores por (-2,-2) 
		para señalar que es un punto disponible para insertar un nuevo punto
		, luego reorganiza la región de ser necesario finalmente retorna true,
		 de no estar el punto retorna false como excepción. 
		*/
		bool borrar(int x, int y);
		/*
		Método que dado un punto busca desde la raiz, el cuadrante o sub-cuadrante
		al que pertenece el punto hasta dar con el, retornando true.
		Si no existe tal punto entonces retorna false para señalar que no se encuentra. 
		*/
		bool buscar(int x,int y);
		/*
		Método que retorna la cantidad de punto que existen en toda la region.
		*/
		int size();
	private:
		/*
		Método para ver a que cuadrante pertenece un punto en relación
		a un nodo(que representa un sub-espacio de la región total).
		retorna 1 si pertenece a SW.
		retorna 2 si pertenece a SE.
		retorna 3 si pertenece a NW.
		retorna 4 si pertenece a NE.  
		*/
		int ver_cuadrante(int x,int y,NodeQuad *n);
		/*
		Método que ve la cantidad de hijos diferentes de existen
		retorna 0 si todas las hojas son son -2
		retorna 1 si la unica hoja existente pertenece a SW
		retorna 2 si la unica hoja existente pertenece a SE
		retorna 3 si la unica hoja existente pertenece a NW
		retorna 4 si la unica hoja existente pertenece a NE
		retorna 5 si existe una rama dentro
		*/
		int ver_hojas(NodeQuad *n);
		/*
		Método que utiliza el método ver_hojas(), para poder reacomodar una sub-región,
 		de esta forma libera espacio que no se está utilizando.
		*/
		int reacomodar(NodeQuad *n);
		/*
		variable que guarda el la cantidad de hojas del árbol.
		*/
		int tam;
		/*
		Nodo a la raiz del árbol.
		*/
		NodeQuad *raiz;
};