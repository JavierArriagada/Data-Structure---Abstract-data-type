#include "PQHeap.h"
#include <bits/stdc++.h>
using namespace std;

PQHeap::PQHeap(){
	t=1;
	tmax=10;
	arr=(int *)malloc(tmax*sizeof(int));;
}
PQHeap::~PQHeap(){
	free(arr);
}
bool PQHeap::empty(){
if(t==0)return true;
 return false;
}
int PQHeap::size(){
return t-1;
}
int PQHeap::top(){
return arr[1];
}
void PQHeap::push(int zerg){
	if(t<tmax){
		arr[t]=zerg;
		for(int i=t;i>1;i--){
			if(arr[i/2]>arr[i]){
				//cout<<"cambie el::"<<arr[i]<<"por mi padre::"
				//<<arr[i/2]<<"y el nuevo i:::"<<i/2<<endl;
				swap(arr[i/2],arr[i]);
				i=i/2+1;
			}
			else break;
		}
	}
	else if(t==tmax){
		arr=(int*)realloc(arr,2*tmax*sizeof(int));
		tmax=tmax*2;
		arr[t]=zerg;
		for(int i=t;i>1;i--){
			if(arr[i]<arr[i/2]){
				swap(arr[i],arr[i/2]);
				i=i/2+1;
			}
			else break;
		}
	}
	
	t++;
}
void PQHeap::pop(){
	swap(arr[1],arr[t-1]);
		t--;
	for(int i=1;i<t;i++){
		if(arr[i*2]<arr[i*2+1]){
			if(arr[i] > arr[i*2] and i*2<t){
				swap(arr[i],arr[i*2]);
				i = i*2-1;
			}
		}
		else {
			if(arr[i] > arr[i*2+1] and i*2+1 <t){
				swap(arr[i],arr[i*2+1]);
				i = i*2;
			}
		}	
	}
}
void PQHeap::ver(){
	for(int i=1;i<t;i++){
		cout<<"En "<<i<<"es "<<arr[i]<<"::";
	}
}

