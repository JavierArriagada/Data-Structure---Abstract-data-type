#include "MapB.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

MapB::MapB(){
	arreglo = (pair<string,int>*)malloc(sizeof(pair<string,int>)*10);		
	max = 10;
	tam = 0; 
	
}

MapB::~MapB(){

}

bool MapB::empty(){
	if (tam == 0)return true;
	else return false;
}

int MapB::size(){
	return tam;

}

void MapB::insert(pair<string,int>){
	//ejemplo
	//par<string,int> A[10];
	//A[5].first = "gatica";
	//A[5].second = 64;

}

int MapB::at(string){

}

void MapB::erase(string){
	//ejemplo
	//par<string,int> A[10];
	//A[5].first = NULL
	//A[5].second = -1;
}