#include "PriorityQueueADT.h"

class PQHeap : public PriorityQueueADT{
public:
	PQHeap();
	~PQHeap();
	bool empty();
	int size();
	int top();
	void push(int zerg);
	void pop();
	void ver();
	//usar wl swap y el min
private:
	int *arr;
	int	tmax;
	int t;
};