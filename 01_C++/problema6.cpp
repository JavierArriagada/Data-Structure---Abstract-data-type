#include <iostream>
#include <cstdio>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main (){
  int n=10;
  int c;
  // inicializar semilla aleatoria:
  srand (time(NULL));

  // genera numero del 1 a 10: 
  int r = rand() % n + 1;
  
  for (int i = 0; i < n; i++)
  {
  	c = rand() % r + 1;

  	printf("%d ", c);

  }
  printf("\n");
  return 0;
}