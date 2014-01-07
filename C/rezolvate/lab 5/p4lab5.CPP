# include <stdio.h>
# include <math.h>
void grad (float a,float b,char *c,float *d)
{
if ((a==0)&&(b==0)) *c='r';
	else if (a==0) *c='v';
		else if (b==0) *d=0;
			else *d=-b/a;
}
int main ()
{
float a,b,c,d,s;
char e;
printf ("Introduce-ti pe a ");
scanf ("%f",&a);
printf ("Introduce-ti pe b ");
scanf ("%f",&b);
printf ("Introduce-ti pe c ");
scanf ("%f",&c);
e='s';
if (b*b-4*a*c<0) d=-sqrt(abs(b*b-4*a*c));
else d=sqrt(b*b-4*a*c);
if (a==0) {
	grad (b,c,&e,&s);
	if (e=='r') printf ("Solutia este multimea nr. reale\n");
		else if (e=='v') printf ("Nu exista solutii\n");
			else if (e=='s') printf ("Solutia este %g",s);
			 }
else if (c==0) {
	grad (a,b,&e,&s);
	if (e=='r') printf ("Solutia este multimea nr. reale\n");
		else if (e=='v') printf ("Solutia este 0\n");
			else if (e=='s') printf ("Solutiile sunt %g si 0",s);
					}
	  else if (b==0)
				 if (-c/a<0) printf ("Solutia este 0 si i%g",sqrt(abs(c/a)));
					else printf ("Solutia este 0 si i%g",sqrt(c/a));
			 else if (d=0) printf ("Solutia este %g",-b/(2*a));
					else if (d>0) printf ("Solutiile ecuatiei sunt %g si %g",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
						else printf ("Solutiile ecuatiei sunt %g+%gi si %g+%gi",-b/(2*a),e/(2*a),-b/(2*a),-e/(2*a));

}
