/* 	g++ -c *.hpp *cpp -std=c++11 
	g++ *.o -std=c++11
	
*/
#ifndef LISTA_H
#define LISTA_H
using namespace std;
template<typename T>
class ListADT{
	public:
	
	virtual void push_back(T n) = 0; 

	virtual T at(int n) = 0; 

	virtual int size() = 0; 

};

#endif /*LISTA_H*/