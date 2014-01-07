//   6. Sa se bordeze o matrice de tip m,n peste R, cu linia m+1 si coloana n+1 unde
//		elem adaugate sunt sumele elem pe linii, respectiv coloane
//
//		EX: 1 5 3 9
//			4 7 2 13
//			5 12 5 22

# include <stdio.h>
int main ()
{
float a[20][20],s,t;
int m,n,i,j;
printf ("Introduceti nr. de linii ");
scanf ("%d",&m);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n);
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
printf ("a[%d,%d]=",i+1,j+1);
scanf ("%f",&a[i][j]);
}

for (j=0;j<n;j++)
{
s=0;
for (i=0;i<m;i++)
s+=a[i][j];
a[m][j]=s;
}
t=0;
for (i=0;i<m;i++)
{
s=0;
for (j=0;j<n;j++)
s+=a[i][j];
a[i][n]=s;
t+=s;
}
a[m][n]=t;
for (i=0;i<=m;i++)
{
printf ("\n");
for (j=0;j<=n;j++)
printf ("%g ",a[i][j]);
}
}
