#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
int i,n;
float x[200],max;
printf ("Introduceti nr. de elemente din sir ");
scanf ("%d",&n);
printf ("x[1]=");
scanf ("%f",&x[0]);
max=x[0];
for (i=2;i<=n;i++){
	printf ("x[%d]=",i);
	scanf ("%f",&x[i-1]);
	if (max < x[i-1] )   max=x[i-1];
	}
printf ("Maximul dintre elementele din sir este %g\n",max);
	
}
