#include <stdio.h>
#include <conio.h>
void schimb(int m,int n)
{
int aux;
aux=m;
m=n;
n=aux;
}
int main()
{
int a,b;
printf("a=");scanf("%d",&a);
printf("b=");scanf("%d",&b);
schimb(a,b);
printf("%d %d ",a,b);
getch();
}
