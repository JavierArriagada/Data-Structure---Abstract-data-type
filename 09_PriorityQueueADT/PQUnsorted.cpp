#include "PQUnsorted.h"
#include <bits/stdc++.h>
using namespace std;

PQUnsorted::PQUnsorted(){
	t=0;
	tmax=10;
	arr=(int *)malloc(tmax*sizeof(int));;
}
PQUnsorted::~PQUnsorted(){
	free(arr);
}
bool PQUnsorted::empty(){
if(t==0)return true;
else return false;
}
int PQUnsorted::size(){
return t;
}
void PQUnsorted::push(int zerg){
	if(t<tmax){
		arr[t]=zerg;
	}
	else if(t==tmax){
		arr=(int*)realloc(arr,2*tmax*sizeof(int));
		tmax=tmax*2;
		arr[t]=zerg;
	}
 	t++;
}
void PQUnsorted::pop(){
	int mario=arr[0],x=0;
	for(int i=1;i<t;i++){
		if(mario>arr[i]){
			mario=arr[i];
			x=i;
		}
	}
	swap(arr[x],arr[t-1]);
	t--;
}
int PQUnsorted::top(){
	int mario=arr[0],x=0;
	for(int i=1;i<t;i++){
		if(mario>arr[i]){
			mario=arr[i];
			x=i;
		}
	}
	return arr[x];
}
void PQUnsorted::ver(){
	for(int i=0;i<t;i++){
		cout<<"En "<<i<<"es "<<arr[i]<<"::";
	}
}