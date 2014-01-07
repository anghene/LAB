//	7. Se considera o matrice patratica A de dimensiuni n*n.
//	Se cere:
//	a-sa se calculeze media aritmetica a elementelor impare a matricei;
//	b-suma elementelor matricei situate deasupra diagonalei principale
//	c-produsul elem de pe diagonala secundara
// 	d-numarul elementelor nenule de pe diagonala principala


# include <stdio.h>
void nenul(int a[20][20],int n)
{
int s=0,i,j;
for (i=0;i<n;i++)
for (j=i+1;j<n;j++)
if (a[i][j]!=0) s++;
printf ("Nr. elem nenule de pe diagonala principala este %d\n",s);
}

void produs(int a[20][20],int n)
{
int p=1,i,j;
for (i=0;i<n;i++)
p*=a[i][n-i-1];
printf ("Produsul elem de pe diag secundara este %d\n",p);
}

void suma (int a[20][20],int n)
{
int s=0,i,j;
for (i=0;i<n;i++)
for (j=i+1;j<n;j++)
s+=a[i][j];
printf ("Suma elem deasupra diagonalei principale este %d\n",s);
}

void media (int a[20][20],int n)
{
float s=0;
int nr=0,i,j;
for (i=0;i<n;i++)
for (j=0;j<n;j++)
if (a[i][j]%2==1) {
	nr++;
	s+=a[i][j];		}
printf ("Media elem. impare este %g\n",s/nr);
}

int main ()
{
int a[20][20],n,i,j;
printf ("Introduceti dimensiunea matricii ");
scanf ("%d",&n);
for (i=0;i<n;i++)
for (j=0;j<n;j++)
{
printf ("a[%d,%d]=",i+1,j+1);
scanf ("%d",&a[i][j]);
}
media (a,n);
suma (a,n);
produs (a,n);
nenul (a,n);
}
