/*
 ============================================================================
 Name        : FWOAWR15.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float result();
int main(void) {
	int x;
	x=result();
	return EXIT_SUCCESS;
}
float result(){
	float mark;
	int y;
	setbuf(stdout,NULL);
	printf("Enter your mark");
	scanf("%f",&mark);
	if(mark>50)
	{
		printf("passed");
	}
	else if(mark==50)
	{
		printf("Just passed");
	}
	else
	{
		printf("Failed");
	}
	return y;
}
