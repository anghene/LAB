// 5. Determinati transpusa matricei a.
# include <stdio.h>
int main ()
{
int a[20][20],b[20][20],m,n,i,j;
printf ("Introduceti nr. de linii ");
scanf ("%d",&m);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n);
if (m!=n) printf ("Nu se poate crea transpusa\n");
	else {
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
printf ("a[%d,%d]=",i+1,j+1);
scanf ("%d",&a[i][j]);
}
for (i=0;i<m;i++)
for (j=0;j<n;j++)
b[j][i]=a[i][j];
for (i=0;i<m;i++)
{
printf ("\n");
for (j=0;j<n;j++)
printf ("%d ",b[i][j]);
}
}
}
