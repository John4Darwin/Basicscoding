/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int L,k,V[100],sum=0;
	setbuf(stdout,NULL);
printf("Enter a Limit");
scanf("%d",&L);
printf("Enter values");
for(k=0;k<L;k++){
	scanf("%d",&V[k]);
}
printf("Entered values are: ");
for(k=0;k<L;k++){
	printf("%d\t",V[k]);
}
printf("\nSum of entered values: ");
for(k=0;k<L;k++){
	sum=sum+V[k];
}
printf("%d",sum);
	return EXIT_SUCCESS;
}
