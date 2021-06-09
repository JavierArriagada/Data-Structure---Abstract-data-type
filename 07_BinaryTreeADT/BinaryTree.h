#include "BinaryTreeADT.h"
using namespace std;

class BinaryTree : public BinaryTreeADT{  

	
	private:
		int tam;
		struct node *root;
		
	public:
		BinaryTree();
		~BinaryTree();
		void insert(int);
		node* search(int);
		int size();
		
		
};