
#include "PRQuadTree.h"
#include "ArregloQuadTree.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned t0,t1,t2,t3;
	int X,Y,C;
	cin>>X>>Y;
	cout<<X<<"--"<<Y<<endl;
	PRQuadTreeADT *arbol = new PRQuadTree(X,Y);
	PRQuadTreeADT *chanta = new ArregloQuadTree(X,Y);
	cin>>C;
	cout<<C<<endl;
	while(C!=0){
		//cout<<C<<endl;
		cin>>X>>Y;
		//cout<<X<<"--"<<Y<<endl;
		arbol->insertar(X,Y);
		//chanta->insertar(X,Y);
		C--;
	}
	cin>>X>>Y;
	cout<<"------------------------"<<endl;
	cout<<"Tamaño del arbol::::"<<arbol->size()<<endl;
	//cout<<"Tamaño del arreglo::"<<chanta->size()<<endl;
	cout<<"------------------------"<<endl;
	t0=clock();
	cout<<"Encontrado en arbol::::"<<arbol->buscar(X,Y)<<endl;
	t1=clock();
	double time=(double(t1-t0)/CLOCKS_PER_SEC);
 	cout <<"Esta en arbol:::" << time << endl;
	//cout<<"Encontrado en arreglo::"<<chanta->buscar(X,Y)<<endl;
	cout<<"------------------------"<<endl;
	//arbol->borrar(X,Y);
	//chanta->borrar(X,Y);
	/*arbol->borrar(X,Y);
	chanta->borrar(X,Y);
	cout<<"------------------------"<<endl;
	cout<<"Tamaño del arbol::::"<<arbol->size()<<endl;
	cout<<"Tamaño del arreglo::"<<chanta->size()<<endl;
	cout<<"------------------------"<<endl;
	cout<<"Encontrado en arbol::::"<<arbol->buscar(X,Y)<<endl;
	cout<<"Encontrado en arreglo::"<<chanta->buscar(X,Y)<<endl;
	cout<<"------------------------"<<endl;
	*/

	/*
	cout<<"------------------------"<<endl;
	t0=clock();
	arbol->buscar(X,Y);
	t1=clock();
 	double time=(double(t1-t0)/CLOCKS_PER_SEC);
 	cout <<"Esta en arbol:::" << time << endl;
 	t2=clock();
	chanta->buscar(X,Y);
	t3=clock();
 	double time2=(double(t3-t2)/CLOCKS_PER_SEC);
 	cout << "Esta en arreglo:::" << time2 << endl;
	cout<<"------------------------"<<endl;*/
	
return 0;
}