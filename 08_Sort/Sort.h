#include <queue>
using namespace std;

class Sort{

private:
	
	priority_queue<int> q;

public:

	void insert(int);
	 
	void remove();

	int min();

	int size();

};
