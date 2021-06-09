#ifndef H_BinaryTreeADT
#define H_BinaryTreeADT
using namespace std;

struct node;

class BinaryTreeADT {
	public:

	
	virtual void insert(int n) = 0; 

	virtual node* search(int n) = 0; 

	virtual int size() = 0;
};

#endif 