#include "PriorityQueueADT.h"

class PQUnsorted : public PriorityQueueADT{
public:
	PQUnsorted();
	~PQUnsorted();
	bool empty();
	int size();
	int top();
	void push(int zerg);
	void pop();
	void ver();
private:
	int *arr;
	int tmax;
	int t;
};