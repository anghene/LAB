# include <stdio.h>
# include <iostream>
# include <math.h>

int main ()
{
int i,n,j,b;
float x[200],y[200],s;
printf ("Introduceti nr. de elemente din sir ");
scanf ("%d",&n);
for (i=0;i<=n-1;i++){
	printf ("x[%d]=",i+1);
	scanf ("%f",&x[i]);
	}
printf ("\nNr distincte sunt:\n");
for (i=0;i<=n-2;i++)  {
b=0;
for (j=0;j<=n-1;j++)
{
if(i!=j){
if (x[i]==x[j]) b=1;
if (!b) printf ("%g ",x[i]);
}
}
}
if (x[n-1]!=x[n-2]) printf ("%g ",x[n-1]);
	}

	
	

