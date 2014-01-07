# include <stdio.h>


int main ()
{
int i,n;
float x[200],s=0,k;
printf ("Introduceti valoarea de verificat: ");
scanf ("%f",&k);
printf ("Introduce-ti nr. de elem din sir ");
scanf ("%d",&n);
for (i=0;i<=n-1;i++) {
	printf ("x[%d]=",i+1);
	scanf ("%f",&x[i]);
	if (k==x[i]) s++;
	}
if (s) printf ("Nr. de aparitii este %g\n",s);
	else printf ("Nr. nu apare in sir\n");
}
