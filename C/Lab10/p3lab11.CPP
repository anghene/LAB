#include <stdio.h>
int cmmdc(int a,int b)
{
if (a==b) return a;
else if (a>b) return cmmdc(a-b,b);
		else return cmmdc(a,b-a);
}
void main ()
{
int a,b;
printf ("a=");scanf("%d",&a);
printf ("b=");scanf("%d",&b);
printf ("cmmdc=%d",cmmdc(a,b));
}
