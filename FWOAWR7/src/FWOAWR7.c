/*
 ============================================================================
 Name        : FWOAWR7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int oppnumber();
int main(void) {
	int k,i;
i=oppnumber(k);
	return EXIT_SUCCESS;
}
int oppnumber(){
	int L=0,i,j;
	for(i=10;i>=L;i--){
		for(j=1;j<i;j++){
			printf("%d",j);
		}
		printf("\n");
	}return i;
}
