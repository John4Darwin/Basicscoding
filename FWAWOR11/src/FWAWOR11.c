/*
 ============================================================================
 Name        : FWAWOR11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sort(int);
int main(void) {
	int l;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&l);
sort(l);
	return EXIT_SUCCESS;
}
void sort(int L){
	int temp,i,a[100],j;
	printf("enter values");
	for(i=0;i<L;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<L-1;i++)
	{
		for(j=i+1;j<L;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Sorted values are \n");
	for(i=0;i<L;i++)
	{
		printf("%d\t",a[i]);
	}
}
