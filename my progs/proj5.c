#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
int a,b,c,d;
printf("Introduceti pretul rachetei:");
scanf("%d") &d;
printf("\nCat a castigat primul? :");
scanf("%d") &a;
printf("\nCat a castigat al doilea? :");
scanf("%d") &b;
printf("\nCat a castigat al treilae? :");
scanf("%d") &c;
if ("%d+%d+%d=%d", a,b,c,d) {printf("\nToti trei pot cumpara impreuna racheta");}

else if (a+b=d) {	printf("\ndoar primii doi"); }
else if (a+c=d) { printf("\ndoar primul si al treilea");}
else if (b+c=d) { printf("\nal doilea si al treilea");}


}
