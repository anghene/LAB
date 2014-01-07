// 5. suma, dif, compararea numere mari

#include <stdio.h>
void cmp (int *x,int m,int *y,int n)
{
int i=0,k=0;
if (m>n) printf ("Primul nr este mai mare \n");
if (m<n) printf ("Al doilea nr este mai mare \n");
if (m==n) {
	if (*x>*y) k=1;
		else if (*x<*y) k=2;
		else
	while ((i<n)&&(*(x+i)==*(y+i))) {
		i++;
		if (*(x+i)>*(y+i)) k=1;
		if (*(x+i)<*(y+i)) k=2;
		}
if (k==0) printf ("Nr egale \n");
if (k==1) printf ("Primul nr este mai mare\n");
if (k==2) printf ("Al doilea nr este mai mare\n");}
}

void suma(int *x,int m,int *y,int n)
{
int i,j,s[200],k=-1;
for (i=0;i<m+n;i++)
s[i]=0;
i=m-1;j=n-1;
while ((i>-1)||(j>-1)) {
k++;
if (i>-1) s[k]=*(x+i);
if (j>-1) s[k]=s[k]+*(y+j);
i--;j--; 		}
for (i=0;i<k;i++)
if (s[i]>9) {
			s[i]=s[i]%10;
			s[i+1]=s[i+1]+1; }
if (s[k]>9) {
		s[k]=s[k]%10;
		s[k+1]=s[k+1]+1;
		k++;  }
printf ("Suma nr. este ");
for (i=k;i>=0;i--)
printf ("%d",s[i]);
}

void diferenta(int *x,int m,int *y,int n)
{
int i,j,d[200],k=-1;
	for (i=0;i<m+n;i++) // m si n numerele, i merge pana la suma lor
	d[i]=0; // vector contine rezultatul dif
	i=m-1;j=n-1;
	while ((i>-1)||(j>-1)) {
		k++;
		if (i>-1) d[k]=*(x-i);
		if (j>-1) d[k]=d[k]-*(y-j);
		i--;j--; 		}
	for (i=0;i<k;i++)
		if (d[i]>9) {
				d[i]=d[i]%10;
				d[i+1]=d[i+1]+1; }
		if (d[k]>9) {
			d[k]=d[k]%10;
			d[k+1]=d[k+1]+1;
			k++;  }
printf ("Dif nr. este ");
for (i=k;i>=0;i--)
printf ("%d",d[i]);
}


int main ()
{
int x[100],y[100],m=-1,n=-1,i,k,v=0;
char c;
printf ("\nIntroduceti primul nr ");
scanf ("%c",&c);
if (c=='-') {v=1;scanf ("%c",&c);}
while (c!='\n')
{
m++;
x[m]=c-48;
scanf ("%c",&c);
}
m++;
printf ("Introduceti al doilea nr ");
scanf ("%c",&c);
if (c=='-') {v+=2;scanf("%c",&c);}
while (c!='\n')
{
n++;
y[n]=c-48;
scanf ("%c",&c);
}
n++;
cmp(x,m,y,n);
suma(x,m,y,n);
diferenta(x,m,y,n);
}
