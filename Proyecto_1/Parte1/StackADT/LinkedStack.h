#include "StackADT.h"
using namespace std;

class LinkedStack : public StackADT{ 

	typedef struct Node{
		int data;
		Node* next;
	}Node;
	
	private:			
		int tam;
		Node *head;
		Node *tail;

	public:
		LinkedStack();
		~LinkedStack();
		void push(int);
		int size();
		bool empty();
		int top();
		void pop();
		
};