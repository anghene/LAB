#include <stdio.h>
#include <io.h>
struct produs {
	char den[30];
	int pret,cant,pret_t;
	float masa,tva;
	 };
int main()
{
char c;
produs x;
FILE *f;
f=fopen("produse.txt","w");
c='d';
while (c=='d') {
	printf("denumire prod=");scanf("%s",&x.den);
	printf("pret prod=");scanf("%d",&x.pret);
	printf("cantitate prod=");scanf("%d",&x.cant);
 	printf("masa_u prod=");scanf("%f",&x.masa);
	x.pret_t=x.pret*x.cant;
	x.tva=x.pret_t*0.19;
	printf("Mai introduceti alt produs (tastati 'd' pt. da)");
	scanf ("%s",&c);
	fprintf (f,"Nume=%s Pret=%d Cantitate=%d Masa=%f Pret_total=%d TVA=%g\n",x.den,x.pret,x.cant,x.masa,x.pret_t,x.tva);
	}
fclose (f);
f=fopen("produse.txt","r");
fscanf(f,"Nume=%s Pret=%d Cantitate=%d Masa=%f Pret_total=%d TVA=%g\n",&x.den,&x.pret,&x.cant,&x.masa,&x.pret_t,&x.tva);
//system("CLS");

printf ("Nume=%s Pret=%d Cantitate=%d Masa=%f Pret_total=%d TVA=%g\n",x.den,x.pret,x.cant,x.masa,x.pret_t,x.tva);

}

