/*
4. Turist masoara cote succesive
rampa- o succesiune de cote strict crescatoare.
panta- o succesiune de cote strict descrescatoare.
pisc- o cota a carei vecini sunt strict mai mici
vale- o cota a carei vecini sunt strict mai mari
podis- o succesiune de cote egale.
determinati>
a. cea mai lunga rampa, panta
b. cel mai inalt pisc
c. cea mai adanca vale
d. cel mai lung podis.

Ex.	1 3 5 2 3 3 3 4 2 5 6 8 9 9 9 3 2 4

*/
#include <stdio.h>
void full (int *s,int n)
{
int i;
for (i=0;i<n;i++)
*(s+i)=32000;
}
void init (int *s,int n)
{
int i;
for (i=0;i<n;i++)
*(s+i)=0;
}
void rampa(int *s,int n,int *x)
{
int i,j,k;
init (s,n);
k=1;
for (i=1;i<n;i++)
if (*(x+i)>*(x+i-1)) k++;
	else { *(s+i-k)=k;k=1;}
*(s+i-k)=k;
k=s[0];
for (i=1;i<n;i++)
if (*(s+i)>k) k=*(s+i);
printf ("Cele mai lungi rampe incep pe urm pozitii ");
for (i=0;i<n;i++)
if (*(s+i)==k) printf ("%d ",i);
}
void panta(int *s,int n,int *x)
{
int i,j,k;
init (s,n);
k=1;
for (i=1;i<n;i++)
if (*(x+i)<*(x+i-1)) k++;
	else { *(s+i-k)=k;k=1;}
*(s+i-k)=k;
k=s[0];
for (i=1;i<n;i++)
if (*(s+i)>k) k=*(s+i);
printf ("\nCele mai lungi pante incep pe urm pozitii ");
for (i=0;i<n;i++)
if (*(s+i)==k) printf ("%d ",i);
}
void pisc(int *s,int n,int *x)
{
int i,j,k;
init (s,n);
if (*x>*(x+1)) *s=*x;
if (*(x+n-1)>*(x+n-2)) *(s+n-1)=*(x+n-1);
for (i=1;i<n-1;i++)
if ((*(x+i-1)<*(x+i))&&(*(x+i)>*(x+i+1))) *(s+i)=*(x+i);
printf ("\nCele mai mari piscuri incep pe urm pozitii ");
k=*s;
for (i=1;i<n;i++)
if (*(s+i)>k) k=*(s+i);
for (i=0;i<n;i++)
if (*(s+i)==k) printf ("%d ",i);
}
void vale(int *s,int n,int *x)
{
int i,j,k;
full (s,n);
if (*x<*(x+1)) *s=*x;
if (*(x+n-1)<*(x+n-2)) *(s+n-1)=*(x+n-1);
for (i=1;i<n-1;i++)
if ((*(x+i-1)>*(x+i))&&(*(x+i)<*(x+i+1))) *(s+i)=*(x+i);
printf ("\nCele mai adanci vai incep pe urm pozitii ");
k=*s;
for (i=1;i<n;i++)
if (*(s+i)<k) k=*(s+i);
for (i=0;i<n;i++)
if (*(s+i)==k) printf ("%d ",i);
}
void podis(int *s,int n,int *x)
{
int i,j,k;
init (s,n);
k=1;
for (i=1;i<n;i++)
if (*(x+i)==*(x+i-1)) k++;
	else { *(s+i-k)=k;k=1;}
*(s+i-k)=k;
k=s[0];
for (i=1;i<n;i++)
if (*(s+i)>k) k=*(s+i);
printf ("\nCele mai lungi podisuri incep pe urm pozitii ");
for (i=0;i<n;i++)
if (*(s+i)==k) printf ("%d ",i);
}
void main ()
{
int x[100],s[100],i,n;
printf ("\nn=");scanf("%d",&n);
for (i=0;i<n;i++) {
printf ("x[%d]=",i);scanf("%d",&x[i]); }
rampa (s,n,x);
panta (s,n,x);
pisc (s,n,x);
vale (s,n,x);
podis (s,n,x);
}
