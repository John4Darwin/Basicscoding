/*
 ============================================================================
 Name        : AWAWR4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int maths(int,int,int);
int main(void) {
	int a,b,C,k;
	setbuf(stdout,NULL);
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("1 for Addition \n2 for subtraction \n3 for Multiplication \n4 for Division \n Enter your Choice");
			scanf("%d",&C);
			k=maths(a,b,C);
	return EXIT_SUCCESS;
}
int maths(int z,int x, int c){
	int R,v;
	if (c==1){
		R=z+x;
		printf("Result is: %d",R);
	}else if(c==2){
		R=z-x;
		printf("Result is: %d",R);
	}else if(c==3){
		R=z*x;
		printf("Result is: %d",R);
	}else if(c==4){
		R=z/x;
		printf("Result is: %d",R);

	}else{
		printf("Are you blind");
	}
	return v;
}
