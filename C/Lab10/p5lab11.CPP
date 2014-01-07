#include <stdio.h>
int  ack(int m,int n)
{
int x;
if (m==0) return n+1;
else if ((n==0)&&(m>0)) return ack(m-1,1);
	else if ((m>0)&&(n>0)) 
		{
		x=ack(m,n-1);
		return ack(m-1,x);
		}
}
int main ()
{
int a,b;
printf ("a=");scanf("%d",&a);
printf ("b=");scanf("%d",&b);
printf ("Rezultatul functiei este %d\n",ack(a,b));
}
