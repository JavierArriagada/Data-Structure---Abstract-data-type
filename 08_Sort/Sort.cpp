#include "Sort.h"

using namespace std;

void Sort::insert(int n){
	q.push(-1*n);
}

void Sort::remove(){
	q.pop();
}

int Sort::min(){
	return -1*q.top();
}

int Sort::size(){
	q.size();

}