#include <cstdlib>
#include <iostream>
using namespace std;
void schimb(int m,int n)
{
int aux;
aux=m;
m=n;
n=aux;
printf("Rezultat afisat din functie %d %d \n\n", m,n);
}
int main(int argc, char *argv[])
{
int a,b;
printf("a=");scanf("%d",&a);
printf("b=");scanf("%d",&b);
schimb(a,b);
printf("Rezultat afisat din main %d %d \n\n",a,b); 
system("PAUSE");
return EXIT_SUCCESS;
}
