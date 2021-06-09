#include "MapADT.h"
#include <bits/stdc++.h>
using namespace std;

class MapB : public MapADT{  

	
	private:
		pair<string,int> *arreglo; 		
		int tam;
		int max;

	public:
		MapB();
		~MapB();
		bool empty();
		int size();		
		void insert(pair<string,int>);
		int at(string);
		void erase(string);

		
};