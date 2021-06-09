#include "PRQuadTreeADT.h"
#include "ArregloQuadTree.h"
#include <bits/stdc++.h>
using namespace std;

ArregloQuadTree::ArregloQuadTree(int x,int y){
	tam=0;
	//el limite de y, lo que conlleva al limite en el punto
	maxTotal=y*y-2;
	max=16;
	//porque se cuentan los x e y por eso se pone 2*max
	arr=(int *)malloc(maxTotal*sizeof(int));
}
ArregloQuadTree::~ArregloQuadTree(){
	free(arr);
}
int ArregloQuadTree::insertar(int x,int y){
	try{
	// hay que comprar los puntos qls para ver si se repiten
		//if(tam+1>=maxTotal)throw 99;
		//if(tam<maxTotal){
		//if(x>=0 and y>=0){
			//if(y<=maxTotal and x<=maxTotal){
			if(buscar(x,y)==0){
				arr[tam]=x;
				arr[tam+1]=y;
				tam=tam+2;
				return 0;
				}
			//	}
			//}
		//}
		//else throw -1;
	}
	catch(int e){
		cout<<"No se puede insertar, el punto exede las dimensiones"<<endl;
	}
}
bool ArregloQuadTree::borrar(int x,int y){
	try{
		for(int i=0;i<tam;i++){
			if(x==arr[i] and y==arr[i+1]){
				swap(arr[i],arr[tam-2]);
					swap(arr[i+1],arr[tam-1]);
				tam=tam-2;
				return true;
			}
			i++;
		}
		throw false;
	}
	catch(bool e){
		cout<<"No existe el punto a eliminar "<<endl;
	}
}
bool ArregloQuadTree::buscar(int x,int y){
	for(int i=0;i<tam;i++){
		if(arr[i]==x and arr[i+1]==y){
			cout<<"Esta "<<x<<" "<<y<<endl;
			return true;
		}
		i++;
	}	
return false;
}
int ArregloQuadTree::size(){
	return tam/2;
}
NodeQuad* ArregloQuadTree::laraiz(){
	return NULL;//chupa un huevo
}