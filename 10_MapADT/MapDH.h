#include "MapADT.h"
#include <bits/stdc++.h>
using namespace std;

class MapDH : public MapADT{  

	
	private:

	
		
	public:
		MapDH();
		~MapDH();
		bool empty();
		int size();
		void insert(pair<string>,int);
		int at(string);
		void erase(string);

		
};