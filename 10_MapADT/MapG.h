#include "MapADT.h"
#include <bits/stdc++.h>
using namespace std;

class MapG : public MapADT{  

	
	private:
	
		
	public:
		MapG();
		~MapG();
		bool empty();
		int size();
		void insert(pair<string>,int);
		int at(string);
		void erase(string);

		
};