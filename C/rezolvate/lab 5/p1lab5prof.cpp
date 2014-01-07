#include <cstdlib>
#include <iostream>

using namespace std;

void prim(int n)
{
int i;
i=2;
while(n%i!=0&&i*2<=n) i++; 
if (2*i<n) printf(" Numar neprim \n");
else 
printf(" Numar prim\n");
}

int main(int argc, char *argv[])
{
int n;
do
{
printf("Introduceti valoarea lui n (0 pentru terminare program) . n=");scanf("%d",&n);
prim(n);
}
while(n!=0);

system("PAUSE");
return EXIT_SUCCESS;
}
