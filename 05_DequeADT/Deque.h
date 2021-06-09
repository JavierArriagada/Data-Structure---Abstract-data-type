#include "DequeADT.h"
using namespace std;

class Deque : public DequeADT{ 

	typedef struct Node{		
		int data;
		Node* next;
		Node* prev;
	}Node;

	private:
		int tam;
		Node *head; 
		Node *tail;

	public:
		Deque();
		~Deque();
		bool empty();
		int size();
		int front();
		int back();
		void push_front(int);
		void push_back(int);
		void pop_front();
		void pop_back();
		void mostrar();
};