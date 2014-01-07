//Calculati suma elementelor unui sir de numere
#include <stdlib.h>
#include <stdio.h>


void citsir(int *x,int *n)
{
   int i;
   printf("Dimensiune sir:");
   scanf("%d",n);
   for (i=0;i<*n;i++)
	scanf("%d",&x[i]);
}

int main()
{
  int a[10],i,n,s;
  citsir(a,&n);
  s=0;
  for (i=0;i<n;i++)
       s=s+a[i];
  printf("Sume=%d",s);
  system("Pause");
}                      
