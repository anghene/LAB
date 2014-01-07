#include <stdio.h>
struct elev{
	char nume[20];
	int nr,nota;
	};
int main()
{
int i,j,n,k;
elev x[40],b;
printf ("Nr de elevi este=");scanf ("%d",&n); // aici incre
printf ("Introduceti elevii \n ");
for (i=0;i<n;i++)
{
printf ("x[%d].nume=",i+1);scanf ("%s",&x[i].nume);
printf ("x[%d].nota=",i+1);scanf ("%d",&x[i].nota);
printf ("x[%d].nr=",i+1);scanf ("%d",&x[i].nr);
}
printf ("K=");scanf ("%d",&k);
for (i=0;i<n-1;i++)
for (j=i+1;j<n;j++) {
	if (x[i].nota<x[j].nota) {
			b=x[i];x[i]=x[j];x[j]=b;
									}
	if ((x[i].nota==x[j].nota)&&(x[i].nr<x[j].nr)) {
			b=x[i];x[i]=x[j];x[j]=b; }}
printf ("Primii %d elevi sortati sunt \n",k);
for (i=0;i<k;i++)
printf ("%s %d %d \n",x[i].nume,x[i].nota,x[i].nr);
}
