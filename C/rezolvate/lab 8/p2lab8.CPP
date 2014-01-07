/*2. Sa se scrie un program care citeste cele n nr care compun vectorul A,cele m
nr reale care compun vectorul B.Sa se afiseze pe ecran cate dintre elem lui A
sunt strict mai mici decat elem lui B. */


# include <stdio.h>
int main ()
{
float a[200],b[200];
int i,j,n,m,k,s=0;
printf ("\nIntroduceti nr de elemente ale primului vector ");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
	printf ("a[%d]=",i+1);
	scanf ("%f",&a[i]);
}
printf ("\nIntroduceti nr de elemente ale celui e-al doilea vector ");
scanf ("%d",&m);
for (i=0;i<m;i++)
{
	printf ("b[%d]=",i+1);
	scanf ("%f",&b[i]);
}
for (i=0;i<n;i++)
{
k=0;
for (j=0;j<m;j++)
if (a[i]>=b[j]) k=1;
if (k==0) s++;
}
printf ("Nr. de elem din A mai mici ca cele din B este %d ",s);
}



