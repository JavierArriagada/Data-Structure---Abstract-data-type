#include "ListADT.h"
using namespace std;

class LinkedList : public ListADT{ //hereda metodos publicos de ListADT 

	typedef struct Node{		//estrcutura que tendra un valor y un puntero que apunte al siguiente
		int data;
		Node* next;
	}Node;

	private:
		int tam;
		Node *head; //punteros tipo estrcutura Node
		Node *tail;

	public:
		LinkedList();//constructor inicializar punteros a null
		~LinkedList();//destructor liberar memoria
		int at(int n);
		int size();//tamaño estructura de datos
		void push_back(int n);//inserta al final
		void mostrar();
};