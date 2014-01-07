# include <stdio.h>
# include <math.h>
# include <iostream>

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
int i,n,x[200],m=-1,s[200];
printf ("Introduceti nr. de elemente din sir ");
scanf ("%d",&n);
for (i=0;i<=n-1;i++){
	printf ("x[%d]=",i+1);
	scanf ("%d",&x[i]);
	if (prim(x[i])) {
		m++;
		s[m]=x[i];
		} }
if (m!=-1) {
	printf ("Vectorul rezultat este \n");
	for (i=0;i<=m;i++)
	printf ("%d ",s[i]);
	 }
	else printf ("Nu exista nr. prime in sirul introdus\n");
}
