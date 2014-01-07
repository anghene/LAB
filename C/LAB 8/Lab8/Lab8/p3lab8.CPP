/*
3. Sa se mute toate elem nule la sfarsitul unui vector (fara a folosi auxiliari).
    EX:1 0 2 0 0 3 0 0
       i=1  1 0 2 0 0 3 0 0
       i=2  1 2 0 0 3 0 0 0
       i=3  1 2 0 3 0 0 0 0
       i=4  1 2 3 0 0 0 0 0
*/

# include <stdio.h>
int main ()
{
int i,n,x[200],k;
printf ("\nIntroduceti nr de elemente ale vectorului ");
scanf ("%d",&n);
for (i=0;i<n;i++)
{
	printf ("x[%d]=",i+1);
	scanf ("%d",&x[i]);
}
do {
k=1;
for (i=0;i<n-1;i++)
if ((x[i]==0)&&(x[i+1]!=0))
	{
		x[i]=x[i+1];
		x[i+1]=0;
		k=0;
	} }
while (k==0);
printf ("Sirul refacut este ");
for (i=0;i<n;i++)
	printf ("%d ",x[i]);
}

