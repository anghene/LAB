// 2. Calculati max din elem. unei matrice.

# include <stdio.h>
# include <cstdlib>
int main ()
{
int x[20][20];
int i,j,n,m,max;
printf ("Introduceti nr. de linii ");
scanf ("%d",&m);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n);
printf ("Introduceti elementele matricii\n");
for (i=0;i<m;i++)
for (j=0;j<n;j++)
	{
	printf ("x[%d,%d]=",i+1,j+1);
	scanf ("%d",&x[i][j]);
	}
max=*x[0,0];
for (i=0;i<m;i++)
for (j=0;j<n;j++)
	if (max<x[i][j]) max=x[i][j];
printf ("Maximul este %d \n",max);

system("PAUSE");
return EXIT_SUCCESS;

}
