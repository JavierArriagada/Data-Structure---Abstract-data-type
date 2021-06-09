#include "MapDH.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

MapDH::MapDH(){
	arreglo = (pair<string,int>*)malloc(sizeof(pair<string,int>)*10);		
	max = 10;
	tam = 0;  
	
}

MapDH::~MapDH(){

}

bool MapDH::empty(){
	if (tam == 0)return true;
	else return false;

}

int MapDH::size(){
	return tam;
}

void MapDH::insert(pair<string,int>){

}

int MapDH::at(string){

}

void MapDH::erase(string){
	
}