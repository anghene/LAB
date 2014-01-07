#include <stdio.h>
#include <conio.h>
void prim(int n)
{
int i;
i=2;
while(n%i!=0&&i*2<=n)   i++; 
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
getch();
}
