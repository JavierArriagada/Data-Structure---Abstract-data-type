#include "Queue.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <stack> 

using namespace std;

Queue::Queue(){
	tam = 0;
}

Queue::~Queue(){

}

bool Queue::empty(){
	if(tam=0)return 1;
	else return 0;

}

int Queue::size(){
	return tam;
}

void Queue::push(int n){
	s1.push(n);
	tam++;
}

int Queue::front(){
	if(tam == 0) return 0;
	int s1_size = s1.size();
	if (s2.empty() == 1){
		for(int i=0; i< s1_size ; i++){
			s2.push(s1.top());
			s1.pop();
		}

	return s2.top();
	}

	else return s2.top();
	
}

int Queue::back(){
	if(tam == 0) return 0;
	int s2_size = s2.size();
	if (s1.empty() == 1){
		for (int i = 0; i < s2_size; i++){
			s1.push(s2.top());
			s2.pop();
		}
		return s1.top();
	}
	else return s1.top();

}

void Queue::pop(){// detalle
	int s1_size = s1.size();
	if(s2.empty() == 1){
		for(int i=0; i< s1_size ; i++){
			s2.push(s1.top());
			s1.pop();
		}
		tam--;	
		return s2.pop();	
	}
	else s2.pop();
	tam--;

}