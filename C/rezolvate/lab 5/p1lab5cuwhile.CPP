#include <stdio.h>

void prim(int n)
{
int i;
i=2;

/*for (i=2;i<n;i++)
 if (n%i==0) a=0;
printf("%d",a);*/

while(n%i!=0&&2*i<=n)   i++; 

if (2*i<n) printf("    Numar neprim \n");
 else 
 printf("    Numar prim\n");
}

int main()
{
int n;
do
{
printf("Introduceti valoarea lui n (0 pentru terminare program) . n=");scanf("%d",&n);
prim(n);
}
while(n!=0);
}
