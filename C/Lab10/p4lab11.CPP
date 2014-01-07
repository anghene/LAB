#include <stdio.h>
int fib(int x)
{
if (x<=2) return 1;
else return(fib(x-1)+fib(x-2));
}
void main ()
{
int a;
printf ("Introduce-ti termenul ");
scanf ("%d",&a);
printf ("Al %d-lea termen este %d",a,fib(a)); 
}
