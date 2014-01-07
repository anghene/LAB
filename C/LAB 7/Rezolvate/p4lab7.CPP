// 4. Fie matricea a(m,n) atunci b(m,n) este "oglinda lui a" B[I,J]= {1, A[I,J]>0, 0, A[I,J]=0, -1 , A[I,J]<0}

# include <stdio.h>
# include <iostream>
# include <stdlib.h>
int main ()
{
int a[20][20],b[20][20],m,n,i,j;
printf ("Introduceti nr. de linii ");
scanf ("%d",&m);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n);
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
printf ("a[%d,%d]=",i+1,j+1);
scanf ("%d",&a[i][j]);
}
for (i=0;i<m;i++)
for (j=0;j<n;j++)
if (a[i][j]>0) b[i][j]=1;
	else if (a[i][j]==0) b[i][j]=0;
		else b[i][j]=-1;
for (i=0;i<m;i++)
{
printf ("\n");
for (j=0;j<n;j++)
printf ("%d ",b[i][j]);
}
system("PAUSE");
}
