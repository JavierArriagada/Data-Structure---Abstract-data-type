#include "QueueADT.h"
#include <stack> 
using namespace std;

class Queue : public QueueADT{ //hereda metodos publicos de QueueADT 
	
	private:
		stack<int> s1,s2;			//stack de c++
		int tam;

	public:
		Queue();
		~Queue();
		bool empty();
		int size();
		int front();
		int back();
		void push(int);
		void pop();
};