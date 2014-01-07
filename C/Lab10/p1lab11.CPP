#include <stdio.h>
void invers (void)
{
char a;
scanf ("%c",&a);
if (a!='\n') invers();
printf ("%c",a);
}
int main ()
{
printf ("Introduce-ti sirul ");
invers();
}
