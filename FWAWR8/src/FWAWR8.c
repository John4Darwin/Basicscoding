/*
 ============================================================================
 Name        : FWAWR8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int array(int);
int main(void)
{
	int L,d;
	setbuf(stdout,NULL);
printf("Enter a limit");
scanf("%d",&L);


d=array(L);


	return EXIT_SUCCESS;
}
int array(int j )
{
	int  i,a[100],f;
	printf("Enter values");
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("Entered values are \n");
	for(i=0;i<j;i++)
	{
		printf("%d\t",a[i]);
	}
return f;
}
