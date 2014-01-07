#include <cstdlib>
#include <iostream>
using namespace std;
void schimba(int m, int n)//void pentru ca nu returneaza nici o valoare
{
int temp;
temp=m;
m=n;
n=temp;
printf("schimbarea din functie a=%d b=%d \n\n",m,n);
}
int main(int argc, char *argv[])
{
int a,b;
printf("Introduceti a= ");
scanf("%d",&a);
printf("Introduceti b= ");
scanf("%d",&b);
printf("Valorle inainte de apelul functiei a=%d b=%d \n\n",a,b);
schimba(a,b);
printf("Valorle dupa apelul functiei a=%d b=%d \n\n",a,b);
system("PAUSE");
return EXIT_SUCCESS;
}
