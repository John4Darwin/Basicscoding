/*
 ============================================================================
 Name        : FWAWOR23.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void twodimensional(int);
int main(void) {
	int H;
	setbuf(stdout,NULL);
printf("Enter the Limit");
scanf("%d",&H);
 twodimensional(H);
	return EXIT_SUCCESS;
}
void twodimensional(int L){
	int i,j,a[10][10],b[10][10],sum=0;
	printf("Enter values of array 1 \n");
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values of array 2\n");
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum of 2 array is \n");
	for(i=0;i<L;i++){
		for(j=0;j<L;j++){
			sum=sum+a[i][j]+b[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}

}
