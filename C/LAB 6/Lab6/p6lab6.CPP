# include <stdio.h>
# include <math.h>
int prim (int a)
{
int i=2,b=1;
while ((i<=sqrt(a))&&(b==1)) {
if (!(a%i)) b=0;
i++;
}
return b;
}
int main ()
{
int i,n,x[200],m;
printf ("\nIntroduceti nr. de elemente din sir ");
scanf ("%d",&n);
m=-1;i=2;
while (m<n) {
	if (prim(i)) { m++;x[m]=i;}
	i++;
	}
printf ("Sirul generat este:");
for (i=0;i<m;i++)
printf ("%d ",x[i]);
}
