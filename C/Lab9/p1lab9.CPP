#include <stdio.h>
#include <iostream>
struct data {
	int an,zi,luna;
	 };
int cmp (struct data x,struct data y)
{
if (x.an>y.an) return 1;
if (x.an<y.an) return 2;
if (x.an==y.an)
	if (x.luna>y.luna) return 1;
	else if (x.luna<y.luna) return 2;
		  else if (x.zi>y.zi) return 1;
				else if (x.zi<y.zi) return 2;
					else return 0;
}
int main()
{
data d1,d2;
printf ("Introduce-ti prima data (zi,luna,an) ");
scanf ("%d%d%d",&d1.zi,&d1.luna,&d1.an);
printf ("Introduce-ti a doua data (zi,luna,an) ");
scanf ("%d%d%d",&d2.zi,&d2.luna,&d2.an);
if (cmp(d1,d2)==0) printf ("Datele sunt egale \n");
	else if (cmp(d1,d2)==1) printf ("Prima data este mai recenta decat a doua\n");
			else printf ("A doua data este mai recenta decat prima\n");



}
