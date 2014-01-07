// 8. Transformati o matrice intr-un sir prin parcurgerea pe linii (coloane, spirala,diagonala).

# include <stdio.h>

void diagonala(int a[20][20],int m,int n,int x[400],int *c)
{
int i=0,j=0;
*c=0;
*(x+*c)=a[i][j];
if (m*n>1) {
*c=*c+1;
i++;
*(x+*c)=a[i][j]; }

while (*c<m*n)
{
if (*c<m*n)
while ((i>0)&&(j<n-1))
	{
	i--;
	*c=*c+1;
	j++;
	*(x+*c)=a[i][j];
	}

if ((*c<m*n)&&(j==n-1))
	{
	*c=*c+1;
	i++;
	*(x+*c)=a[i][j];
	}
if ((*c<m*n)&&(i==0)&&(j<n-1))
	{
	*c=*c+1;
	j++;
	*(x+*c)=a[i][j];
	}

if (*c<m*n)
while ((j>0)&&(i<m-1))
	{
	i++;
	*c=*c+1;
	j--;
	*(x+*c)=a[i][j];
	}
if (*c<m*n)
if (i==m-1) {
	*c=*c+1;
	j++;
	*(x+*c)=a[i][j];
	}
	else if ((j==0)&&(i!=m-1)) {
	*c=*c+1;
	i++;
	*(x+*c)=a[i][j];
	}
}
}



void spirala(int a[20][20],int m,int n,int x[400],int *c)
{
int i,j,k=0;
float v;
*c=-1;
if (m%2==0) v=m/2;
	else v=m/2+1;
while (k<v)
{
if (*c<m*n-1)
for (j=k;j<n-k;j++)
	{	*c=*c+1;
	*(x+*c)=a[k][j]; }
if (*c<m*n-1)
for (i=k+1;i<m-k-1;i++)
	{	*c=*c+1;
	*(x+*c)=a[i][n-k-1]; }
if (*c<m*n-1)
for (j=n-k-1;j>k-1;j--)
	{	*c=*c+1;
	*(x+*c)=a[m-k-1][j]; }
if (*c<m*n-1)
for (i=m-k-2;i>k;i--)
	{	*c=*c+1;
	*(x+*c)=a[i][k]; }
k++;
}
}

void coloana(int a[20][20],int m,int n,int x[400],int *c)
{
int i,j;
*c=-1;
for (j=0;j<n;j++)
for (i=0;i<m;i++)
{
	*c=*c+1;
	*(x+*c)=a[i][j];
}
}

void linie(int a[20][20],int m,int n,int x[400],int *c)
{
int i,j;
*c=-1;
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
	*c=*c+1;
	*(x+*c)=a[i][j];
}
}

int main ()
{
int a[20][20],m,n,i,j,x[400],c;
printf ("\nIntroduceti nr. de linii ");
scanf ("%d",&m);
printf ("Introduceti nr. de coloane ");
scanf ("%d",&n);
for (i=0;i<m;i++)
for (j=0;j<n;j++)
{
printf ("a[%d,%d]=",i+1,j+1);
scanf ("%d",&a[i][j]);
}
linie(a,m,n,x,&c);
printf ("Sirul rezultat prin linie este ");
for (i=0;i<=c;i++)
printf ("%d ",x[i]);
coloana(a,m,n,x,&c);
printf ("\nSirul rezultat prin coloana este ");
for (i=0;i<=c;i++)
printf ("%d ",x[i]);
if ((m==1)||(n==1)) printf ("\nNu se poate genera solutia ");
	else {
spirala(a,m,n,x,&c);
printf ("\nSirul rezultat prin spirala este ");
for (i=0;i<=c;i++)
printf ("%d ",x[i]);
	}
diagonala(a,m,n,x,&c);
if ((m==1)||(n==1)) printf ("\nNu se poate genera solutia ");
else {
printf ("\nSirul rezultat prin diagonala este ");
for (i=0;i<c;i++)
printf ("%d ",x[i]);
printf ("\n %d ",c);
}
}




