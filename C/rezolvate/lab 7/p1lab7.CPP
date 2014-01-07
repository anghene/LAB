// 1. Ordonati crescator elem unui sir folosind metoda bubble sort, selectie
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void bubble (int *x,int n)
{
	int i,m;
	int k;
	char c;
	do {
		c='a';
		for (i=0;i<n-1;i++)
			if (*(x+i)>*(x+i+1)) {
				c='f';
				k=*(x+i);
				*(x+i)=*(x+1+i);
				*(x+i+1)=k;	}

		}
	while (c=='f');
	for (i=0;i<n;i++)
		printf ("%d ",*(x+i));
}

void insertie (int *x,int n)
{
	int i,j;
	int k;
	for (i=0;i<n-2;i++)
		for (j=i+1;j<n-1;j++)
			if (*(x+i)>*(x+j)) {
				k=*(x+i);
				*(x+i)=*(x+j);
				*(x+j)=k;
					}
	for (i=0;i<n;i++)
		printf ("%d ",*(x+i));
}
int main()
{
	int i,n;
	int x[200];
	printf ("\nIntroduce-ti nr. de elemente ");
	scanf ("%d",&n);
	printf ("Introduce-ti elementele\n");
	for (i=0;i<n;i++)
		{
		printf ("x[%d]=",i+1);
		scanf ("%d",&x[i]);
		}
	printf ("Elementele sortate sunt \n");
	bubble(x,n);
	printf ("\n");
	insertie(x,n);
	for (i=0;i<n;i++)
		printf ("%d ",x[i]);
	system("PAUSE");
	return EXIT_SUCCESS;
}
