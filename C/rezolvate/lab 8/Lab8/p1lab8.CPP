// 1.Se da un vector A cu n elem nr reale si P,Q doua numere reale. Sa se scrie un program
// care copiaza intr-un vector B toate elem din A din intervalul (p,q) in ordine crescatoare.
//       EX:A=(12,-4,9,7,-5,31,-74,515,-33,-8)
//          P=-10   Q=9
//          B=(-8,-5,-4, 7)
//
//


# include <stdio.h>
int main ()
{
float a[200],x[200],p,q,k;
int i,j,n,m;
printf ("\nIntroduceti nr de elemente ale vectorului ");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
	printf ("a[%d]=",i+1);
	scanf ("%f",&a[i]);
}
m=-1;
printf ("Introduce-ti cele 2 numere ");
scanf ("%f%f",&p,&q);
if (q<p) printf ("Interval introdus gresit ");
	else
	{
		for (i=0;i<n;i++)
		if ((a[i]>=p)&&(a[i]<=q))
			{
				m++;
				x[m]=a[i];
			}
		for (i=0;i<m;i++)
		for (j=i+1;j<=m;j++)
			if (x[i]>x[j])
			{
				k=x[i];
				x[i]=x[j];
				x[j]=k;
			}
		if (m>-1)
			{
			printf ("Sirul rezultat sortat este ");
			for (i=0;i<m;i++)
			printf ("%g ",x[i]);
			}
			else printf ("Nu exista numere care sa apartina intervalului\n");
}
}




