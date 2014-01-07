/*7. Varf de munte.*/
#include <stdio.h>
int main ()
{
int x[20][20],s[20][20],i,j,m,n;
printf ("\nm=");scanf ("%d",&m);
printf ("n=");scanf ("%d",&n);
for (i=0;i<m+2;i++)
for (j=0;j<n+2;j++)
{s[i][j]=0;x[i][j]=0;}

for (i=1;i<m+1;i++)
for (j=1;j<n+1;j++)
{
printf ("x[%d,%d]=",i,j);scanf ("%d",&x[i][j]);
}
for (i=1;i<m+1;i++)
for (j=1;j<n+1;j++)
if ((x[i][j]>x[i-1][j-1])&&(x[i][j]>x[i-1][j])&&(x[i][j]>x[i-1][j+1])
	&&(x[i][j]>x[i][j-1])&&(x[i][j]>x[i][j+1])&&(x[i][j]>x[i+1][j-1])
	&&(x[i][j]>x[i+1][j])&&(x[i][j]>x[i+1][j+1])) s[i][j]=x[i][j];
printf ("Coord unde se afla munti sunt ");
for (i=1;i<m+1;i++)
for (j=1;j<n+1;j++)
if (s[i][j]>0) printf ("x[%d,%d] ",i,j);
}
