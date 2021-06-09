#include "MapG.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

MapG::MapG(){ 
	arreglo = (pair<string,int>*)malloc(sizeof(pair<string,int>)*10);		
	max = 10;
	tam = 0; 
	
}

MapG::~MapG(){

}

bool MapG::empty(){
	if (tam == 0)return true;
	else return false;

}

int MapG::size(){
	return tam;
}

void MapG::insert(pair<string,int>){

}

int MapG::at(string){

}

void MapG::erase(string){
	
}