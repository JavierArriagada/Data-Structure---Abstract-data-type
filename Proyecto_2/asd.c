#include <stdio.h>
#include <stdlib.h>

int main(){
	//srand(time(NULL));
	int i,j,x=0,y=0,r,n = 500000,X = 4096, Y = 4096;
	/*
	//cluster
	printf("%d %d\n", X, Y);
	printf("%d\n",n);
	for (i = 0; i < n; i++){
		x = rand()% X/2;
		y = rand()% Y/2;
		printf("%d %d\n",x,y );
	}

	printf("%d %d\n",x,y );
	printf("NW");
	*/


	/*
	//aleatorios
	printf("%d %d\n", X, Y);
	printf("%d\n",n);
	for (i = 0; i < n; i++){
		x = rand()% X;
		y = rand()% Y;
		printf("%d %d\n",x,y );
	}
	printf("%d %d\n",x,y );
	printf("aleatorio");
	*/


	
	//equil
	printf("%d %d\n", X, Y);
	printf("%d\n",n);
	for (i = 0; i < X;){
		for (j = 0; j < Y;){
			x = i;
			y = j;
			printf("%d %d\n",x,y );
			j=j+6;
		}

		i=i+6;
	}

	printf("%d %d\n",x,y );
	printf("equil");
	

	return 0;
}