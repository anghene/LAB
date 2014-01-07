# include <stdio.h>
# include <math.h>
float medAtc(int *x,int n)
{
int i;
float s=0;
for (i=0;i<=n-1;i++)
s+=*(x+i);
s=s/n;
return s;
}
float medGeo (int *x,int n)
{
int i;
float s=1;
for (i=0;i<=n-1;i++)
s*=*(x+i);
s=exp(1./n*log((s)));
return s;
}
float medArm (int *x,int n)
{
int i;
float s=0;
for (i=0;i<=n-1;i++)
s+=(1./(*(x+i)));
s=1./n*(1./s) ;
return s;
}
int cmmdc (int *x,int n)
{
int s,i;
s=*x;
i=1;
while ((i<n)&&(s!=1)) {
while (s!=*(x+i))
	if (s>*(x+i)) s-=*(x+i);
		else *(x+i)-=s;
	i++;
		}
return s;
}
int cmmdc2 (int m,int n)
{
while (m!=n)
if (m>n) m-=n;
	else n-=m;
return m;
}

long cmmmc (int *x,int n)
{
long s,i,a;
float v;
a=*x;
for (i=1;i<n;i++) {
s=cmmdc2(a,*(x+i));
a=(a**(x+i));
v=a/s;
a=floor(v);
	}
return floor(v);
}

int main ()
{
int i,n,x[200];
printf ("\nIntroduceti nr. de elemente din sir ");
scanf ("%d",&n);
for (i=0;i<=n-1;i++){
	printf ("x[%d]=",i+1);
	scanf ("%d",&x[i]);
	}
printf ("Media aritmetica este %g\n",medAtc(x,n));
printf ("Media geometrica este %g\n",medGeo(x,n));
printf ("Media armonica este %g\n",medArm(x,n));
printf ("Cmmdc al nr. din sir este %d\n",cmmdc(x,n));
printf ("Cmmmc al nr. din sir este %d\n",cmmmc(x,n));
}
