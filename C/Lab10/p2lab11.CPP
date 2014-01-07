#include <stdio.h>
long  fact(int x)
{
if (x==1) return(1);
	else return(fact(x-1)*x);
}
void main ()
{
int n;
printf ("Introduce-ti nr ");
scanf ("%d",&n);
printf ("Rezultatul este %d",fact(n));
}
