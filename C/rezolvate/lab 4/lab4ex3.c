#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
    

int i, n, fact=1; //la declararea lui fact î-l si initializam
system("cls");
printf("Introduceti un numar n<10");
scanf("%d",&n);
for(i=2;i<n;i=i+1)
    {
    fact=fact*i;
     printf("%d!=%d",i,fact);
    }

  
  system("PAUSE");	
  return 0;
}
